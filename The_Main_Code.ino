#include "DFRobot_EC.h"
#define TdsSensorPin A4
int pH_Value;
int phval = 0; 
DFRobot_EC ec;


void setup() {
Serial.begin(9600);
pinMode(TdsSensorPin, INPUT);
pinMode(pH_Value, INPUT);
  ec.begin();
}

float turbitity_value = 0.0;
float tdsValue = 0.0;
float voltage,ecValue,temperature = 25;

void loop() {




//if(  1 =< A =< 100 ) {
//  str A = Yes     
//}
//else{
//   str A = No
//}
//// this is one part
//if(  3 =< B =< 5 ) {
//  str B = Yes     
//}
//else{
//  str B = No
//}
////this is one part
//if(  1 =< C =< 2 ) {
//  str C = Yes     
//}
//else{
//   str C = No
//}
//// this is one part
//if(  6 =< A =< 9 ) {
//  str D = Yes     
//}
//else{
//   str D = No
//}
//// this is one part
//   

}
