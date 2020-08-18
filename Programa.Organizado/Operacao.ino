void IniciarOperacao() 
{
  delay(500);
  EscreverTextoIniciar();
  AguardarPressionarBotaoIniciar();
  LigarMotor();  
  EscreverTextoTrabalhando();   
  while(true)
  {
    AguardarPressionarBotaoParar();
  }
}

//****Botões****//
void AguardarPressionarBotaoIniciar()
{
  while(digitalRead(botaoIniciar)){}
}

void AguardarPressionarBotaoParar()
{
  if(!digitalRead(botaoParar))
  {
    DesligarMotor();
    LigarBuzzer();    
    EscreverTextoParado();    
    AguardarPressionarBotaoIniciar();
    DesligarBuzzer();    
    LigarMotor(); 
    EscreverTextoTrabalhando();    
  }
}
//****Motor****//
void LigarMotor()
{
  digitalWrite(motor, HIGH);  
}

void DesligarMotor()
{
  digitalWrite(motor, LOW);
}

//****Buzzer****//
void LigarBuzzer()
{
    digitalWrite(buzzer, HIGH);
}

void DesligarBuzzer()
{
    digitalWrite(buzzer, LOW);
}
