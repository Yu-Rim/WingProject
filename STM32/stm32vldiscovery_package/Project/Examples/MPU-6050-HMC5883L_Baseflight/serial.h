

#include "stm32f10x.h"



void SerialSetup(uint16_t baudRate);

void print_byte(short  c);

void print_short(short  c);

#include <stm32f10x.h>
void __attribute__((weak)) osa_mdelay(unsigned int msec);

void putc ( void* p, char c);
