#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

/*
 *  ESP32 Get MAC Address Example
 *  Full Tutorial @ https://deepbluembedded.com/esp32-wifi-library-examples-tutorial-arduino/
 */
#include <WiFi.h>
 
void setup(){
    Serial.begin(115200);
    Serial.print("\nDefault ESP32 MAC Address: ");
    Serial.println(WiFi.macAddress());
}


void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}