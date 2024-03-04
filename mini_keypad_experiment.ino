// Include keypad library
#include <Keypad.h>

// Creating constants for row and column sizes
const byte rows =  4;
const byte columns = 4;

// Aray that represents the keys of the keypad
char hexaKeys[rows][columns] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

// Vectors for the conections to Arduino
byte rowPins[rows] = {9, 8, 7, 6};
byte colPins[columns] = {5, 4, 3, 2};

//Creating a keypad object
Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, rows, columns);

void setup() {
  // Setup serail monitor
  Serial.begin(9600);
}

void loop() {
  // Get key value if pressed
  char customKey = customKeypad.getKey();

  if (customKey) {
    // Print key value to serial monitor
    Serial.println(customKey);
  }
}
