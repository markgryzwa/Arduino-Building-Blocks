

<#include SoftwareSerial.h>
SoftwareSerial BTSerial(2,3)    // (RX,TX) pins
char charDataIn = 0;
// ----------------------------------------------------------------------

void setup() {
  BTSerial.begin(38400);   // my HC-06 wants to communicate at 38,400 

}
// ----------------------------------------------------------------------

void loop() {
  if(BTSerial.available()>0){
    charDataIn = BTSerial.read();

    // do your thing with new serial data
  }

}
