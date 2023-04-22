
//Vivian
//
#include <Arduino.h> // to include an arduino library

void setup() { // void setup is "static" while void loop works like the "for" function
    Serial.begin(9600); // establish serial communication
}

//Lucas Galvão
void loop() {
    // Entrada de dados do usuário
    String nome;
    Serial.print("Digite o seu nome: ");
    while (!Serial.available());
    nome = Serial.readStringUntil('\n');
    nome.trim(); 
