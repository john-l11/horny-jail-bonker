#include "headers/includes.h"

/**
 * This is the entrypoint for the microcontroller
 * @file main.c
 * @author johne
 * @date 2026-08-16
 * @brief Main function
 */
int main(){
    // Initialize all the peripherals on the microcontroller.
    portInit();
    pwmInit();
    uartInit();


    // Add your code here and press Ctrl + Shift + B to build
    while(1) {
        
    }

    return 0;
}
