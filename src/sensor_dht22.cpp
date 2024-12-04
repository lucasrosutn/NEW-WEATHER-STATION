#include "sensor_dht22.h"
#include <DHT.h>

#define DHTPIN 4  // Cambia esto según tu conexión
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void init_sensor() {
    dht.begin();
}

float get_temperature() {
    float temp = dht.readTemperature();
    if (isnan(temp)) {
        Serial.println("Error al leer la temperatura");
        return -1; // Indica un error
    }
    return temp;
}

float get_humidity() {
    float hum = dht.readHumidity();
    if (isnan(hum)) {
        Serial.println("Error al leer la humedad");
        return -1; // Indica un error
    }
    return hum;
}
