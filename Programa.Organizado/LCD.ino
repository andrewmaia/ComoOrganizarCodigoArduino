void ApresentacaoInicializacao() {
  lcd.setCursor(5, 1);
  lcd.print("Iniciando");
  lcd.setCursor(6, 2);
  lcd.print("Sistema");
  delay(1000);
  lcd.clear();
}

void EscreverTextoIniciar()
{
  lcd.clear();
  lcd.setCursor(2, 1);
  lcd.print("Pressione Iniciar");
}

void EscreverTextoParado()
{
  lcd.clear();
  lcd.setCursor(3, 1);
  lcd.print("Sistema Parado");
  lcd.setCursor(2, 2);
  lcd.print("Pressione Iniciar");    
}


void EscreverTextoTrabalhando()
{
  lcd.clear();
  lcd.setCursor(3, 1);
  lcd.print("Trabalhando...");    
}
