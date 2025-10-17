#include <IRremote.hpp>

/*
  ╔═══════════════════════════════════════════════════════════════════════╗
  ║                      Remote Signal Cloning                            ║
  ║                     30+ LED Animation  Effects                        ║
  ║                                                                       ║
  ║    Author: Muhammad Sudais Usmani                                     ║
  ║      GitHub: https://github.com/Dit-Developers/RemoteSignalCloning    ║
  ╚═══════════════════════════════════════════════════════════════════════╝
*/
#include <IRremote.h>

#define RECV_PIN 2    
#define LED_PIN 13    

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(RECV_PIN);  
  pinMode(LED_PIN, OUTPUT);   
  Serial.println("Waiting for IR signal...");
}

void loop() {
  if (IrReceiver.decode()) {
    // Blink LED
    digitalWrite(LED_PIN, HIGH);
    delay(150);
    digitalWrite(LED_PIN, LOW);

    // Print IR signal to Serial Monitor
    Serial.println("============================");
    Serial.print("Captured Code: 0x");
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
    Serial.println("Signal cloned!");
    Serial.print("============================");

    IrReceiver.resume(); // Ready for next
    delay(150);          // Small delay
  }
}
