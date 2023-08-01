#include <msp430.h>
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "myDraws.h"
#include "switches.h"

void main()
{
    configureClocks();
    lcd_init();
    clearScreen(COLOR_WHITE);
    buzzer_init();    
    
    while(1)
    {
        switch_init();
        __delay_cycles(250000);
    }

    or_sr(0x18);
}
