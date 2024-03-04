// set pinos Arduino
const int buttonPin = 8; // entrada digital - pushbutton
const int ledPin = 13; // saída digital -  LED
 
// set variáveis
boolean state = 0; //  variável para armazenar valores do pushbutton
 
void setup() {
  // define pinos de saída e entrada
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // pullup interno do Arduino
}
 
void loop(){
  if (!digitalRead(buttonPin)) {   // botão pressionado - LOW (true)
    state = !state; // inverte valor da variável state
    if (state) {
      // liga o led
      digitalWrite(ledPin, LOW); // liga se state for 1
    } else {
      // desliga o led
      digitalWrite(ledPin, HIGH); // desliga se state for 0
    }
    while (!digitalRead(buttonPin)) {} // aguarda soltar o botão
    delay(150); // delay para reduzir o efeito bouncing
  }
}