#include <msp430.h>
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "myDraws.h"
#include "switches.h"
#include "led.h"
#include "buzzer.h"
#include <stddef.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


void main()
{
     unsigned int seed = TA0R; // Usar el valor del timer TA0R como semilla
    srand(seed); // Inicializar la semilla para la función rand()
    configureClocks();
    lcd_init();
    clearScreen(COLOR_BLACK);
    startRectangle();
    buzzer_init();    
    drawRectangle();
   

    while(1)
    {
        switch_init();
        __delay_cycles(250000);
    }

    or_sr(0x18);
}

int globalCounter(){
  static int counter = 0;
  counter++;
  return counter;
}
