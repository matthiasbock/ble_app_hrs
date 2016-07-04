
#ifndef UART_H
#define UART_H

#include <stdio.h>
#include <string.h>

#include "app_uart.h"
#include "nrf_delay.h"
#include "uart_conf.h"

void uart_init();
void uart_putstring(char* str);

#endif // UART_H
