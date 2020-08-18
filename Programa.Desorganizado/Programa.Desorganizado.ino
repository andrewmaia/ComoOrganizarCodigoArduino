#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  //SetarConfiguracaoInicial
  Wire.begin();
  lcd.begin (20, 4);
  lcd.setBacklight(HIGH);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(13, OUTPUT);  
  pinMode(4, OUTPUT); 
  //DesligarBuzzer    
  digitalWrite(4, LOW);    
  //DesligarMotor();
  digitalWrite(13, LOW);
  
  //ApresentacaoInicializacao
  lcd.setCursor(5, 1);
  lcd.print("Iniciando");
  lcd.setCursor(6, 2);
  lcd.print("Sistema");
  delay(1000);
  lcd.clear();  
}

void loop() {
  delay(500);
  //EscreverTextoIniciar
  lcd.clear();
  lcd.setCursor(2, 1);
  lcd.print("Pressione Iniciar");
  
  //AguardarPressionarBotaoIniciar
  while(digitalRead(2)){}  
  
  //LigarMotor
  digitalWrite(13, HIGH);    
  
  //EscreverTextoTrabalhando
  lcd.clear();
  lcd.setCursor(3, 1);
  lcd.print("Trabalhando...");     
      
  while(true)
  {
    //AguardarPressionarBotaoParar
    if(!digitalRead(3))
    {
      //DesligarMotor();
      digitalWrite(13, LOW);
      
      //LigarBuzzer
      digitalWrite(4, HIGH);    
      
      //EscreverTextoParado   
      lcd.clear();
      lcd.setCursor(3, 1);
      lcd.print("Sistema Parado");
      lcd.setCursor(2, 2);
      lcd.print("Pressione Iniciar");    
  
      
      //AguardarPressionarBotaoIniciar
      while(digitalRead(2)){}  
      
      //DesligarBuzzer    
      digitalWrite(4, LOW);   
      //LigarMotor
      digitalWrite(13, HIGH);      
      
      //EscreverTextoTrabalhando
      lcd.clear();
      lcd.setCursor(3, 1);
      lcd.print("Trabalhando...");     
    }    
  }
} 
