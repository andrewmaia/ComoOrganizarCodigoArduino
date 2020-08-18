#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

const int botaoIniciar = 2;
const int botaoParar = 3;
const int buzzer=4;
const int motor =13;

void setup() {
  SetarConfiguracaoInicial();
  ApresentacaoInicializacao();
}

void loop() {
  IniciarOperacao();  
}
