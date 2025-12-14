#include <SoftwareSerial.h>//Yazilimsal UART

SoftwareSerial lora(2,3); //RX,TX

const int potPin = A0; //Potansiyometre Pini

void setup() {
  Serial.begin(9600);
  lora.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin); // 0–1023
  int angle = map(potValue, 0, 1023, 0, 180); //Aciyi oranla

  lora.println(angle);   //Servo acisini gonder
  Serial.println(angle); //Aciyi monitorde goster

  delay(100);//100 ms bekleme
}
