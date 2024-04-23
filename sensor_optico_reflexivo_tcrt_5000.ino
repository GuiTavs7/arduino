int ledPin = 13;
int analogPin = 3;
int valor = 0;

void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  
  valor = analogRead(analogPin); // Guarda na variável a leitura analógica do pino do sensor
  
  Serial.println(valor); // Printa no serial monitor o valor 
  
  delay(500);

  if(valor>1000){
    
    Serial.println("\n SOMBRA DETECTADA! LED ACENDE! \n");
    digitalWrite(ledPin,HIGH);
    
  }
  else{

    Serial.println("\n LED APAGADO! \n");
    digitalWrite(ledPin,LOW);
    
  }

}
