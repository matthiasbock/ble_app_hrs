
#include "uart.h"

/**@brief   Function for handling UART interrupts.
 *
 * @details This function will receive a single character from the UART and append it to a string.
 *          The string will be be sent over BLE when the last character received was a 'new line'
 *          i.e '\n' (hex 0x0D) or if the string has reached a length of @ref NUS_MAX_DATA_LENGTH.
 */

void uart_evt_callback(app_uart_evt_t * uart_evt)
{
    //uint32_t err_code;

    switch (uart_evt->evt_type)
    {
        case APP_UART_DATA:
            //Data is ready on the UART
            break;

        case APP_UART_DATA_READY:
            //Data is ready on the UART FIFO
            break;

        case APP_UART_TX_EMPTY:
            //Data has been successfully transmitted on the UART
            break;

        default:
            break;
    }

}


/**@brief  Function for initializing the UART module.
 */
void uart_init()
{
    uint32_t err_code;

    APP_UART_FIFO_INIT(&comm_params,
                        RX_BUF_SIZE,
                        TX_BUF_SIZE,
                        uart_evt_callback,
                        UART_IRQ_PRIORITY,
                        err_code);

    APP_ERROR_CHECK(err_code);
}


/**
 * @brief Write string to UART
 */
void uart_putstring(char* str)
{
    printf("a");
    return;
    uint32_t err_code = 0;

    uint8_t len = strlen((char *) str);
    for (uint8_t i = 0; i < len; i++)
    {
        printf(str[i]);
        //err_code = app_uart_put(str[i]);
        APP_ERROR_CHECK(err_code);
    }
}
