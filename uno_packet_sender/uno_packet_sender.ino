#include <SoftwareSerial.h>

SoftwareSerial lora(2, 3); //RX, TX

//10 byte ornek veri
byte buffer[10] = {10,20,30,40,50,60,70,80,90,100};

void setup() 
{
  Serial.begin(9600);
  lora.begin(9600);
}

void loop() 
{
  // Fixed mode header Adress 2
  lora.write((byte)0x00); // ADDH 
  lora.write(0x02); // ADDL
  lora.write(0x23); // Channel 35

  // 10 byte veri gönder
  for (int i = 0; i < 10; i++)
  {
    lora.write(buffer[i]);
  }
  Serial.println("10 byte gonderildi");
  delay(500);//500 ms bekle
}
