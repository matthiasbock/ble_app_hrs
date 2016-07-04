/* Copyright (c) 2013 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

/**@file
 *
 * @defgroup app_uart UART module
 * @{
 * @ingroup app_common
 *
 * @brief UART module interface.
 */

#ifndef UART_CONF_H__
#define UART_CONF_H__

#include "board.h"
#include "app_uart.h"
#include "nrf51_bitfields.h"

#define UART_IRQ_PRIORITY APP_IRQ_PRIORITY_LOW

/**< Size of desired RX buffer, must be a power of 2 or ZERO (No FIFO). */
#define RX_BUF_SIZE 128
/**< Size of desired TX buffer, must be a power of 2 or ZERO (No FIFO) */
#define TX_BUF_SIZE 128

/**
 *@brief UART configuration structure
 */
static const app_uart_comm_params_t comm_params =
{
    .rx_pin_no  = PIN_UART_RX,
    .tx_pin_no  = PIN_UART_TX,
    .rts_pin_no = PIN_UART_RTS,
    .cts_pin_no = PIN_UART_CTS,

    //Below values are defined in ser_config.h common for application and connectivity
    .flow_control = APP_UART_FLOW_CONTROL_DISABLED,
    .use_parity   = false,
    .baud_rate    = UART_BAUDRATE_BAUDRATE_Baud115200
};

/** @} */
#endif //UART_CONF_H__
