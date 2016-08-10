int analogicPin = A0;
int valorPotenciometro = 0; 
int transistor = 9;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(analogicPin, INPUT);
}

void loop() {
  valorPotenciometro = analogRead(analogicPin);
  valorPotenciometro = valorPotenciometro/4;
  analogWrite(transistor,valorPotenciometro);
  delay(100);        
 }