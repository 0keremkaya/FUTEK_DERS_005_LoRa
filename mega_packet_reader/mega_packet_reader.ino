void setup() {
  Serial.begin(9600);
  Serial2.begin(9600); //Lora
  Serial.println("LoRa Alıcı Hazır");
}

void loop() {
  if (Serial2.available() >= 10) { 
    //10 byte data gelmeli

    byte receivedData[10];

    for (int i = 0; i < 10; i++) {
      receivedData[i] = Serial2.read();
    }

    Serial.print("Gelen Veri: ");
    for (int i = 0; i < 10; i++) {
      Serial.print(receivedData[i]);
      Serial.print(" ");
    }
    Serial.println();
  }
}
