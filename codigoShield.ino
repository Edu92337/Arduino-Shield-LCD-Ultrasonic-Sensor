#include <LiquidCrystal.h>
#include <Ultrasonic.h>
int gatilho = A0;
int receptor = A1;
Ultrasonic ultrasonico(gatilho,receptor);
int distancia;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
   Serial.begin(9600);
   lcd.begin(16, 2);
   lcd.print("hello, world!");
}

void loop() {
  distancia = ultrasonico.read();
  lcd.clear();
  lcd.print("Distancia: ");
  lcd.print(distancia);
  lcd.print(" cm");
  delay(500);

}
