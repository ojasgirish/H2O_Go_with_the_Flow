float calibration_value = 21.34 - 0.7;

float Voltage;


void ph() {
  // put your main code here, to run repeatedly:
  pH_Value = analogRead(A3);
  Voltage = pH_Value * (5.0 / 1023.0);
  phval = -5.70 * Voltage + calibration_value;
  delay(500);

  Serial.print("PH Value");
  
}
