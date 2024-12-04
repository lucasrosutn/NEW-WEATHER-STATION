#include <Arduino.h>
#include "setup.h"
#include "sensor_dht22.h"

void setup() {
    setup_hardware(); // Inicialización de hardware (serial, sensores, etc.)
    init_sensor();    // Inicializar el sensor DHT22
}

void loop() {
    float temp = get_temperature();
    float hum = get_humidity();

    Serial.print("Temperatura: ");
    Serial.print(temp);
    Serial.println(" °C");

    Serial.print("Humedad: ");
    Serial.print(hum);
    Serial.println(" %");

    delay(10000); // Actualización cada 10 segundos
}
