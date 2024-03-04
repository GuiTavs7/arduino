const int potPin = A0;  // Pino analógico onde o potenciômetro está conectado
const int ledPin = 9;   // Pino digital onde o LED está conectado

void setup() {
  pinMode(ledPin, OUTPUT);  // Define o pino do LED como saída
  Serial.begin(9600); // Inicializa a comunicação serial com uma taxa de 9600 baud
}

void loop() {
  int potValue = analogRead(potPin);    // Lê o valor do potenciômetro
  int interval = map(potValue, 0, 1023, 1000, 10000);  // Mapeia o valor do potenciômetro para um intervalo de tempo de 1 a 10 segundos (1000 a 10000 milissegundos)

  Serial.println(potValue); // Envia o valor lido para o monitor serial
  
  delay(100); // Aguarda um curto período de tempo para evitar leituras muito rápidas

  digitalWrite(ledPin, HIGH);   // Liga o LED
  delay(interval / 2);           // Aguarda metade do intervalo de tempo
  digitalWrite(ledPin, LOW);    // Desliga o LED
  delay(interval / 2);           // Aguarda metade do intervalo de tempo
}
