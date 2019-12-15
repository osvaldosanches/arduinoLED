//Osvaldo Sanches - Teste de funcionamento de arduino com led

#include <Arduino.h>

int led = 8; // led conectado no pino 8 - positivo

void setup() {

  pinMode (led, OUTPUT);  // Pino 8 será saída na declaração de função
  
}

void loop() {

  digitalWrite (led, HIGH); // LED ligado
  
  delay (5000); // Aguarda 5 segundos
  
  digitalWrite (led, LOW); // LED desligado
  
  delay (5000); // Aguarda 5 segundos
  
}