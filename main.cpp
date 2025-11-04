#include "mbed.h"

#define SLEEP_TIME              250ms
#define USER_BUTTON             PC_13

DigitalOut led(LED1);
DigitalIn button(USER_BUTTON);

int main()
{
   
    while (true) {
        if (button.read() == 0)
        {
            led = 0;
        }
        else
        {
            led = 1;
        }
        ThisThread::sleep_for(SLEEP_TIME);
    }
}
