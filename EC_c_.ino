
#include <EEPROM.h>

#define EC_PIN A0

void getEc()
{
    static unsigned long timepoint = millis();
    if(millis()-timepoint>1000U)  //time interval: 1s
    {
      timepoint = millis();
      voltage = analogRead(EC_PIN)/1024.0*5000;   // read the voltage
      //temperature = readTemperature();          // read your temperature sensor to execute temperature compensation
      ecValue =  ec.readEC(voltage,temperature);  // convert voltage to EC with temperature compensation
    

      Serial.print("temperature:");
      Serial.print(temperature,1);
      Serial.print("^C  EC:");
      Serial.print(ecValue,2);
      Serial.println("ms/cm");

    }
    ec.calibration(voltage,temperature);          // calibration process by Serail CMD
}

float readTemperature()
{
  //add your code here to get the temperature from your temperature sensor
}
