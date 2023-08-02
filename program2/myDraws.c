
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
    rectangle1.row = screenHeight/2;
    rectangle1.col = screenWidth / 1.1;
    rectangle1.old_row = screenHeight/2;
    rectangle1.old_col = screenWidth / 1.1;
    rectangle1.height = 50;
    rectangle1.width = 10;
}

void drawRectangle()
{
   // Draw rectangle1 at its current position
    fillRectangle(rectangle1.col - (rectangle1.width / 2), rectangle1.row - (rectangle1.height / 2), rectangle1.width, rectangle1.height, COLOR_RED);

}

void move(Rectangle* rect, char* dir) 
{
  // Erase the old  rectangle
  fillRectangle(rect->old_col - (rect->width / 2), rect->old_row - (rect->height / 2), rect->width, rect->height, COLOR_BLACK);

  // Update the rectangle's position based on the direction
  if (direction == "U") {
    rect->row -= 10; // Move up by 5 pixels
  } else if (direction == "D") {
    rect->row += 10; // Move down by 5 pixels
  }

  // Make sure the rectangle doesn't go out of bounds
  if (rect->row < rect->height / 2) {
    rect->row = rect->height / 2;
  } else if (rect->row > screenHeight - rect->height / 2) {
    rect->row = screenHeight - rect->height / 2;
  }

  // Redraw the updated rectangle
  fillRectangle(rect->col - (rect->width / 2), rect->row - (rect->height / 2), rect->width, rect->height, COLOR_GREEN);

  // Update the old position to the new position for the next move
  rect->old_row = rect->row;
}
