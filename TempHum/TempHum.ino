#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
    float h = dht.readHumidity();
    float f = dht.readTemperature(true);
    if (isnan(h) || isnan(f)) {
      Serial.println(F("Failed to read from DHT sensor!"));
      return;
    }
    Serial.print(F(" Humidity: "));
    Serial.print(h);
    Serial.print(F("%  Temperature: "));
    Serial.print(f);
    Serial.print("\n");
}
