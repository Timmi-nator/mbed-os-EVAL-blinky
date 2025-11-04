/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


DigitalOut led1(D2);
DigitalOut led3(D3);

int main()
{
   
    while (true) {
        led1 = 1;
        led2 = 0;
        ThisThread::sleep_for(500ms);

        led1 = 0;
        led2 = 1;
        ThisThread::sleep_for(1000ms);

        led2 = 0;

    }
}
