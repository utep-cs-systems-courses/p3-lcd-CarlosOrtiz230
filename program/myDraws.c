#include <msp430.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "myDraws.h"

void funnyFace()
{
  int posRow = 20;
  int posCol= 20;
  int i;
  //lentes
  fillRectangle(20,30,30,30,COLOR_BLACK);
  fillRectangle(80,30,30,30,COLOR_BLACK);
  //conector
  for(int i = 0;i<45;i++)
  {
    drawPixel(90+i,30,COLOR_BLACK);
    drawPixel(30+i,30,COLOR_BLACK);
    drawPixel(50+i,40,COLOR_BLACK);
  }
  //nouse
  posCol = 40;
  posRow = 90;
  for(int i = 0; i<30; i++)
  {
    drawPixel(posCol+i,posRow-i,COLOR_ORANGE);
    drawPixel(posCol+i,posRow,COLOR_ORANGE);
  }
  //mouth
  posCol = 30;
  posRow = 120;
  for(int i = 0; i<70; i++)
  {
    drawPixel(posCol+i,posRow,COLOR_ORANGE);
    drawPixel(posCol+i,posRow,COLOR_ORANGE);
  }

  for(int i = 0; i<5; i++)
  {
    drawPixel(posCol-i,posRow-i,COLOR_ORANGE);
    drawPixel(posCol+67+i,posRow-i,COLOR_ORANGE);
  }
    

}//method ends



