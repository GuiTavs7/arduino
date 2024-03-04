const int potPin = A0;   // Pino analógico onde o potenciômetro está conectado
const int ledPin = 9;    // Pino digital onde o LED está conectado

void setup() {
  pinMode(ledPin, OUTPUT); // Define o pino do LED como saída
  Serial.begin(9600); // Inicializa a comunicação serial com uma taxa de 9600 baud
}

void loop() {
  // Lê o valor do potenciômetro (0-1023)
  int potValue = analogRead(potPin);

  Serial.println(potValue); // Envia o valor lido para o monitor serial
  
  delay(100); // Aguarda um curto período de tempo para evitar leituras muito rápidas

  // Mapeia o valor do potenciômetro para a faixa de brilho do LED (0-255)
  int brightness = map(potValue, 0, 1023, 0, 255);

  // Define o brilho do LED com base no valor lido do potenciômetro
  analogWrite(ledPin, brightness);
}
