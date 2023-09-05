/*
  Simple Checksum
  Author: Bonezegei (Jofel Batutay)
  Date: September 2023 
*/

#include <Bonezegei_Compute.h>
Bonezegei_Compute bzc;

void setup() {
  Serial.begin(115200);
  char *str="Hello World";

  //Checksum modulo 256
  Serial.printf("checkSum8: 0x%x\n",bzc.checkSum8(str));
  Serial.printf("checkSum16: 0x%x\n",bzc.checkSum16(str));
}

void loop() {
  // put your main code here, to run repeatedly:
}
