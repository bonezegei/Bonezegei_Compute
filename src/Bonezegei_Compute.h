/*
  This Library is written for Bonezegei Compute
  Author: Bonezegei (Jofel Batutay)
  Date: September 2023 
*/

#ifndef _BONEZEGEI_COMPUTE_H_
#define _BONEZEGEI_COMPUTE_H_
#include <Arduino.h>

class Bonezegei_Compute {
public:
  Bonezegei_Compute();
  uint8_t checkSum8(char *data);    //8 bit modulo 256
  uint16_t checkSum16(char *data);  //16 bit modulo 256
};

#endif
