#include <Keypad.h>

// Définition du clavier matriciel
const byte ROWS = 4;  // Nombre de lignes
const byte COLS = 4;  // Nombre de colonnes

char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};  // Connexion des lignes aux broches 9, 8, 7, 6
byte colPins[COLS] = {5, 4, 3, 2};  // Connexion des colonnes aux broches 5, 4, 3, 2

Keypad customKeypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);
}

void loop() {
  char key = customKeypad.getKey();
  if (key) {
    Serial.println(key);  // Afficher la touche appuyée dans le moniteur série
  }
}
