/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_WHITE);
 
  // drawString5x7(0,0, "todo gracias a la 4T", COLOR_GREEN, COLOR_RED);

  // fillRectangle(30,30, 60, 60, COLOR_ORANGE);

  int posRow = 20;
  int posCol= 20;
  int i;
  for(i = 0; i<40; i++)
    {
      drawPixel(posCol+i,posRow,COLOR_BLACK);
      drawPixel(posCol+i+50,posRow,COLOR_BLACK);
      if(i%4==0){
      	drawPixel(posCol,posRow+i,COLOR_BLACK);
	drawPixel(posCol+i,posRow+i+1,COLOR_BLACK);
	continue;
      }
      drawPixel(posCol+i,posRow+i,COLOR_BLACK);
    }
}
