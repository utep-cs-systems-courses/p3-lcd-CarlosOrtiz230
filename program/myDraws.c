#include <msp430.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "myDraws.h"
#include "led.h"

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

void drawHouseWithSun()
{
  // Draw the house
 {
  // Draw the house
  fillRectangle(50, 150, 100, 100, COLOR_BLUE); // Body of the house
  fillRectangle(70, 170, 20, 30, COLOR_RED);    // Door
  fillRectangle(85, 120, 10, 30, COLOR_GREEN);  // Window 1
  fillRectangle(105, 120, 10, 30, COLOR_GREEN); // Window 2
  drawPixel(100, 150, COLOR_BLACK);            // Roof peak
  drawPixel(70, 150, COLOR_BLACK);             // Roof left corner
  drawPixel(130, 150, COLOR_BLACK);            // Roof right corner

  // Draw the sun-like square
  int sunX = 200; // X-coordinate of the sun
  int sunY = 30;  // Y-coordinate of the sun
  int sunSize = 40; // Size of the sun (square)

  // Calculate the coordinates of the corners of the square
  int cornersX[4] = {sunX - sunSize, sunX + sunSize, sunX + sunSize, sunX - sunSize};
  int cornersY[4] = {sunY - sunSize, sunY - sunSize, sunY + sunSize, sunY + sunSize};

  // Draw the sun-like square by connecting the center to each corner
  for (int i = 0; i < 4; i++) {
    int startX = sunX;
    int startY = sunY;
    int endX = cornersX[i];
    int endY = cornersY[i];
    
    // Determine the direction of the line (left or right)
    int xStep = (endX > startX) ? 1 : -1;
    // Determine the direction of the line (up or down)
    int yStep = (endY > startY) ? 1 : -1;

    // Calculate the absolute difference between end and start coordinates
    int diffX = abs(endX - startX);
    int diffY = abs(endY - startY);

    // Use the larger difference as the number of steps in the for loop
    int numSteps = (diffX > diffY) ? diffX : diffY;

    // Draw the line using a for loop
    for (int step = 0; step <= numSteps; step++) {
      int x = startX + step * xStep;
      int y = startY + step * yStep;
      drawixel(x, y, COLOR_YELLOW);
   }
  }
}


