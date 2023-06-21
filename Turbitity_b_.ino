
void turbitity() {
  int sensorValue = analogRead(A2);
  turbitity_value = sensorValue * (5.0 / 1024.0);
  delay(500);

  Serial.print("Turbidity Value");
  
}
