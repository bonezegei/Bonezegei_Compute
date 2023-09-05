/*
  This Library is written for Bonezegei Compute
  Author: Bonezegei (Jofel Batutay)
  Date: September 2023 
*/
#include "Bonezegei_Compute.h"

Bonezegei_Compute::Bonezegei_Compute() {}

uint8_t Bonezegei_Compute::checkSum8(char *data) {
  uint8_t crc1 = 0x00;
  for (int a = 0; a < strlen(data); a++) {
    crc1 = (crc1 + data[a]) % 256;
  }
  return crc1;
}

uint16_t Bonezegei_Compute::checkSum16(char *data) {
  uint16_t CRC = 0x0000;
  uint8_t crc1 = (uint8_t)CRC;
  uint8_t crc2 = (uint8_t)(CRC >> 8);
  for (int a = 0; a < strlen(data); a++) {
    crc1 = (crc1 + data[a]) % 256;
    crc2 = (crc2 + crc1) % 256;
  }
  return (crc2 << 8) | crc1;
}
