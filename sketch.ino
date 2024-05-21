//const int pinoled = 22;
//const int piscada = 5;
const int ledPins[] = {2, 4, 5};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);
const int espera = 500;

void setup() {

  for (int i=0; i < numLeds; i++){
    pinMode(ledPins[i], OUTPUT);
  }

 // pinMode(pinoled, OUTPUT);

 // for(int i = 0; i < piscada; i++){
 // digitalWrite(pinoled, HIGH);
 // delay(300);
 // digitalWrite(pinoled, LOW);
 // delay(300);
 // }
}

void loop() {
  for(int i=0; i < numLeds; i++){
    digitalWrite(ledPins[i], HIGH);
    delay(espera);
    digitalWrite(ledPins[i], LOW);
    delay(espera);
  }
}