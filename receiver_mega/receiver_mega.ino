#include <Servo.h>//Servo kutuphanesini ekle

Servo myServo;

void setup() {
  Serial.begin(9600);
  Serial2.begin(9600);//Serial2 de LoRa bagli
  myServo.attach(9);//servo pini tanimlama
}

void loop() {
  if (Serial2.available()) //Loradan veri geliyorsa
  {
    int angle = Serial2.parseInt(); //Gelen degeri INT olarak oku

    if (angle >= 0 && angle <= 180)//Aci degeri 0-180 arasinda ise 
    {
      myServo.write(angle);//Aci bilgisine uygun PWM sinyali servoya ilet
      Serial.println(angle);
    }
  }
}
