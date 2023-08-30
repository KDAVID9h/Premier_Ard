// Définition de la broche à laquelle est connectée la LED
const int ledPin = 13;

void setup() {
  // Configuration de la broche de la LED en sortie
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Allume la LED pendant 1 seconde
  digitalWrite(ledPin, HIGH);
  delay(1000);
  
  // Éteint la LED pendant 1 seconde
  digitalWrite(ledPin, LOW);
  delay(1000);
}
