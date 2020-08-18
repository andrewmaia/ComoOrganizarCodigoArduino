 void SetarConfiguracaoInicial(){
  Wire.begin();
  lcd.begin (20, 4);
  lcd.setBacklight(HIGH);

  //Inputs
  pinMode(botaoIniciar, INPUT_PULLUP);
  pinMode(botaoParar, INPUT_PULLUP);

 //Outputs
  pinMode(motor, OUTPUT);  
  pinMode(buzzer, OUTPUT); 

  DesligarBuzzer();
  DesligarMotor();
}
