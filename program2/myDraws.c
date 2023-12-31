
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
    rectangle1.row = 30;
    rectangle1.col = 30;
    rectangle1.old_row = 50;
    rectangle1.old_col = 50;
    rectangle1.height = 30;
    rectangle1.width = 30;
}

void drawRectangle()
{
   // Draw rectangle1 at its current position
    fillRectangle(rectangle1.col - (rectangle1.width)/2, rectangle1.row - (rectangle1.height)/2, rectangle1.width, rectangle1.height, COLOR_RED); 
}

void move(Rectangle* rect, char* dir) 
{
  // Erase the old  rectangle
  fillRectangle(rect->old_col - (rect->width / 2), rect->old_row - (rect->height / 2), rect->width, rect->height, COLOR_WHITE);

  // Mov function is called depending on the input
  if (dir == 1) {
    rect->row -= 3; // Move up 
  } else if (dir == 2) {
    rect->row += 3; // Move down 
  }else if (dir == 3) {
    rect->col -= 3; // Move left  
  }else if (dir == 4) {
    rect->col += 3; // Move right 
  }

  // Avoid out of bounds
  if (rect->row < rect->height / 2) {
    rect->row = rect->height / 2;
  } else if (rect->row > screenHeight - rect->height / 2) {
    rect->row = screenHeight - rect->height / 2;
  } 
  // Redraw the updated rectangle
  fillRectangle(rect->col - (rect->width / 2), rect->row - (rect->height / 2), rect->width, rect->height, COLOR_RED);

  // Update the old position to the new position for the next move
  rect->old_row = rect->row; 
  rect->old_col = rect->col;
}
