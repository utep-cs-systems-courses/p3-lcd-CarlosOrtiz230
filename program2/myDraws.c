
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

void startRectangle(){
  rectangle1.row = screenHeight/2;
  rectangle1.col = screenWidth / 1.1;
  rectangle1.old_row = screenHeight/2;
  rectangle1.old_col = screenWidth / 1.1;
  rectangle1.height = 50;
  rectangle1.width = 10;
}

void drawRectangle()
{
   fillRectangle(rectangle1.col - (rectangle1.width / 2), rectangle1.row - (rectangle1.height / 2), rectangle1.width, rectangle1.height, COLOR_GREEN)
}

void move_rectangles(Rectangle* rect, Direction direction) 
{
  // Erase the old rectangle
  fillRectangle(rect->old_col - (rect->width / 2), rect->old_row - (rect->height / 2), rect->width, rect->height, COLOR_BLACK);

  if (direction == UP) {
    rect->row -= 10; // Move up by 5 pixels
  } else if (direction == DOWN) {
    rect->row += 10; // Move down by 5 pixels
  }
  
  if (rect->row < rect->height / 2) {
    rect->row = rect->height / 2;
  } else if (rect->row > screenHeight - rect->height / 2) {
    rect->row = screenHeight - rect->height / 2;
  }
  fillRectangle(rect->col - (rect->width / 2), rect->row - (rect->height / 2), rect->width, rect->height, COLOR_GREEN);

  rect->old_row = rect->row;
}
