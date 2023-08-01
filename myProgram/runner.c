#include <msp430.h>
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "draws.h"


#define LED BIT6/* note that bit zero req'd for display */
#define SW1 1
#define SW2 2
#define SW3 4
#define SW4 8
#define SWITCHES 15

void main()
{
  clearScreen(COLOR_BLACK);
  fillRectangle(30,30,60,60,COLOR_BLACK);
  funnyFace();
  P1DIR |= LED;/**< Green led on when CPU on */
  P1OUT |= LED;
  configureClocks();
  lcd_init();
  enableWDTInterrupts();      /**< enable periodic interrupt */
  or_sr(0x8);              /**< GIE (enable interrupts) */
  or_sr(0x10);/**< CPU OFF */
}

