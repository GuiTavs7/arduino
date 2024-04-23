int ledPin = 13;
int analogPin = 3;
int valor = 0;

void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  
  valor = analogRead(analogPin); // Guarda na variável a leitura analógica do pino do sensor

  int brightness = map(valor, 990, 1016, 0, 255);  // Mapeia o valor do sensor para o intervalo de 0 a 255 - Mais luminosidade -> Mais próximo de 900 -> Reflete bem

  Serial.println(valor); // Printa no serial monitor o valor 

  analogWrite(ledPin, brightness);   // Define a intensidade do LED com base no valor do sensor

  delay(100);

}
