#include <Arduino.h>
#include "setup.h"

void setup_hardware() {
    Serial.begin(115200); // Inicializar el puerto serie
    delay(1000); // Esperar un momento para inicialización
}
