//
//  C-PTPIP.h
//
//  Created by Andrew Haining on 22/04/2015.
//
//

#ifndef __C_PTPIP__
#define __C_PTPIP__

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

enum Code
{
  C_GetPropDesc = 0x1014,
  C_GetProp = 0x1015,
  C_SetProp = 0x1016,
  C_GetAllPropsDesc = 0x9614,
  C_Open = 0x1002,
  C_Close = 0x1002,
  C_Mode = 0xD604
};

bool cptpipInit(const char* address, int *socket, int *eventSocket, uint32_t *sessionId);
void cptpipUninit(int socket, int eventSocket, uint32_t sessionId);

uint32_t cptpipGetMode(int socket, uint32_t transactionId);
void cptpipGetAllProperties(int socket, uint32_t transactionId, uint8_t **raw_property_list, uint16_t *raw_property_list_length);
void cptpipGetProperty(enum Code code, uint8_t const *raw_property_list, uint16_t raw_property_list_length, uint8_t const **values, uint8_t * value_size, uint8_t * value_count);

#endif /* defined(__C_PTPIP__) */


