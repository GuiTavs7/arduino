int ledPin = 13;
int analogPin = 3;
int val = 0;

void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  
  val = analogRead(analogPin);
  
  Serial.println(val);
  
  delay(500);

  if(val>1000){
    digitalWrite(ledPin,OUTPUT);
  }
  else{
    digitalWrite(ledPin,LOW);
  }

}
