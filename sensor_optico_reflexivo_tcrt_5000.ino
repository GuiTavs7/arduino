int ledPin = 13;
int analogPin = 3;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
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
