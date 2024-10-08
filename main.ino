#include <Keypad.h>

const int ROW_NUM = 4; // four rows
const int COLUMN_NUM = 4; // four columns

char keys[ROW_NUM][COLUMN_NUM] = {
  {'1', '2', '3', 'A'}, 
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte pin_rows[ROW_NUM] = {9, 8, 7, 6}; // connect to the row pinouts of the keypad
byte pin_column[COLUMN_NUM] = {5, 4, 3, 2}; // connect to the column pinouts of the keypad

Keypad keypad = Keypad(makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM);

void setup() {
  Serial.begin(9600);
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    switch (key) {
      case '1':
        Serial.println("Star this repo");
        break;
      case '2':
        Serial.println("Or I delete your github");
        break;
      case '3':
        Serial.println("Made by Nitrous-0xide");
        break;
      case 'A':
        Serial.println("A");
        break;
      case '4':
        Serial.println("4");
        break;
      case '5':
        Serial.println("5");
        break;
      case '6':
        Serial.println("6");
        break;
      case 'B':
        Serial.println("B");
        break;
      case '7':
        Serial.println("7");
        break;
      case '8':
        Serial.println("8");
        break;
      case '9':
        Serial.println("9");
        break;
      case 'C':
        Serial.println("C");
        break;
      case '*':
        Serial.print("[2J");
        break;
      case '0':
        Serial.println("0");
        break;
      case '#':
        Serial.println("#");
        break;
      case 'D':
        Serial.println("D");
        break;
      default:
        Serial.println(key);
        break;
    }
  }
}
