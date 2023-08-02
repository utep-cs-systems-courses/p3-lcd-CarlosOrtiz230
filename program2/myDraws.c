
#include <msp430.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "myDraws.h"
#include "led.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "buzzer.h"
#include "stateMachine.h"

Rectangle rectangle1;

void startRectangle(){
  rectangle1.row = 50;
  rectangle1.col = 50;
  rectangle1.old_row = 0;
  rectangle1.old_col = 0;
  rectangle1.height =30;
  rectangle1.width = 30;
}

void drawRectangle()
{
   fillRectangle(0,00,10,10, COLOR_RED);
}

void move(Rectangle* rect, char* dir) 
{
  // Erase the old rectangle
  fillRectangle(rect->old_col - (rect->width / 2), rect->old_row - (rect->height / 2), rect->width, rect->height, COLOR_WHITE);

  if (dir == "U") {
    rect->row -= 10;  
  } else if (dir == "D") {
    rect->row += 10;  
  }else if (dir == "L") {
    rect->col -= 10;  
  }else if (dir == "R") {
    rect->col += 10; 
  }
  
  if (rect->row < rect->height / 2) {
    rect->row = rect->height / 2;
  } else if (rect->row > screenHeight - rect->height / 2) {
    rect->row = screenHeight - rect->height / 2;
  }
  fillRectangle(rect->col - (rect->width / 2), rect->row - (rect->height / 2), rect->width, rect->height, COLOR_RED);

  rect->old_row = rect->row;
}
