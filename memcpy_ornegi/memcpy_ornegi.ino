void setup() 
{
  Serial.begin(9600);

  // Örnek float değer
  float originalFloat = 12.34;

  // Float'ı byte dizisine çevirelim
  uint8_t buffer[4];
  memcpy(buffer, &originalFloat, sizeof(float));

  // Şimdi bu 4 byte'ı tekrar float'a çevirelim
  float convertedFloat;
  memcpy(&convertedFloat, buffer, sizeof(float));

  Serial.print("Orijinal Float: ");
  Serial.println(originalFloat, 6);

  Serial.print("Byte'lar: ");
  for (int i = 0; i < 4; i++)
  {
    Serial.print(buffer[i], HEX);
    Serial.print(" ");
  }
  Serial.println();

  Serial.print("Byte'lardan Donusen Float: ");
  Serial.println(convertedFloat, 6);
}

void loop(){
}