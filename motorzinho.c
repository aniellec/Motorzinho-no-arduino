int analogicPin = A0; //definimos o pino analógico zero
int valorPotenciometro = 0;  //começamos com valor zero no potenciometro
int transistor = 9; //o transistor esta no pino nove

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