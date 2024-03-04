const int potPin = A0; // Pino analógico onde o potenciômetro está conectado
const int ledPin = 9;  // Pino digital onde o LED está conectado

void setup() {
  pinMode(ledPin, OUTPUT); // Define o pino do LED como saída
  Serial.begin(9600); // Inicializa a comunicação serial com uma taxa de 9600 baud
}

void loop() {
  int potValue = analogRead(potPin); // Lê o valor do potenciômetro

  if (potValue > 500) {
    digitalWrite(ledPin, HIGH); // Liga o LED se o valor do potenciômetro for maior que 500
  } else {
    digitalWrite(ledPin, LOW);  // Desliga o LED caso contrário
  }

  Serial.println(potValue); // Envia o valor lido para o monitor serial
  
  delay(1000); // Aguarda um curto período de tempo para evitar leituras muito rápidas
  
}
