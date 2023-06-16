#include <Arduino.h>
#include <DHT.h>

#define DHT_PIN 9

DHT dht(DHT_PIN, DHT11);

void setup() {
    Serial.begin(9600);
    dht.begin();
}

void loop() {

    delay(2000);

    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();

    Serial.print("Humidity:");
    Serial.print(humidity);
    Serial.print(" ");
    Serial.print("Temperature:");
    Serial.print(temperature);
    Serial.println();

}