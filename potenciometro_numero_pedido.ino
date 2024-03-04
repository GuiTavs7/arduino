const int potPin = A0;   // Pino analógico onde o potenciômetro está conectado

// Função setup() -- CONFIGURAÇÕES INICIAIS DO ARDUINO

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial com uma taxa de 9600 baud

} // FIM DA FUNÇÃO setup()

// -------------------------------------------------------------------------------------------------------------

// Função loop() -- DEFINE O CÓDIGO QUE FICA EM LOOP DURANTE EXECUÇÃO DO PROGRAMA

void loop() {
  int potValue = analogRead(potPin); // Lê o valor do potenciômetro (0-1023)

  // SEQUÊNCIA CONDICIONAL PARA VERIFICAR EM QUAL DAS QUATRO OPÇÕES DE PEDIDO O VALOR DO POTENCIÔMETRO ENCAIXA
  // ENCADEAMENTO DE IF'S (CONDICIONAIS)

  if (potValue >= 0 && potValue < 255) {
    Serial.println("Valor do potenciômetro: " + String(potValue) + " - Pedido Persol Nº 1000!");
    delay(5000); // Aguarda 5 segundos para evitar leituras muito rápidas
  } else if (potValue >= 255 && potValue < 510) {
    Serial.println("Valor do potenciômetro: " + String(potValue) + " - Pedido Persol Nº 1010!");
    delay(5000); // Aguarda 5 segundos para evitar leituras muito rápidas
  } else if (potValue >= 510 && potValue < 765) {
    Serial.println("Valor do potenciômetro: " + String(potValue) + " - Pedido Persol Nº 1015!");
    delay(5000); // Aguarda 5 segundos para evitar leituras muito rápidas
  } else if (potValue >= 765 && potValue <= 1023) {
    Serial.println("Valor do potenciômetro: " + String(potValue) + " - Pedido Persol Nº 1050!");
    delay(5000); // Aguarda 5 segundos para evitar leituras muito rápidas
  }

} // FIM DA FUNÇÃO loop()

// -------------------------------------------------------------------------------------------------------------
