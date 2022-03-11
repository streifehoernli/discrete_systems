/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include <stdint.h>

#include "IIR_filter.h"

DigitalOut led(LED1);

// main program
static BufferedSerial serial_port(USBTX, USBRX);

int main()
{    
    IIR_filter fi(.1,.01);
    const uint16_t N = 100;
    float u[N], y[N];
    for(uint16_t k =0; k < N; k++) {
        u[k] = 1.0;
        y[k] = fi(u[k]);
        printf("%2.3f %2.3f \n", u[k], y[k]);
    }
    
    while(1) 
    ;    
    

}
