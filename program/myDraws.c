#include <msp430.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "myDraws.h"
#include "led.h"
#include <stdio.h>
#include <stdlib.h>

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

void dayHouse()
{
  // Draw the house
  fillRectangle(40, 60, 100, 100, COLOR_BLUE); // Body of the house
  fillRectangle(40, 60, 20, 30, COLOR_RED);    // Door
  fillRectangle(85, 50, 10, 30, COLOR_GREEN);  // Window 1
  drawPixel(40, 80, COLOR_BLACK);            // Roof peak
  drawPixel(70, 80, COLOR_BLACK);             // Roof left corner
  drawPixel(30, 80, COLOR_BLACK);            // Roof right corner

  // Draw the sun-like square
  int sunX = 200; // X-coordinate of the sun
  int sunY = 30;  // Y-coordinate of the sun
  int sunSize = 40; // Size of the sun (square)

  // Draw the sun-like square by connecting the center to each corner
  drawLine(sunX, sunY, sunX + sunSize, sunY, COLOR_YELLOW); // Right side
  drawLine(sunX, sunY, sunX - sunSize, sunY, COLOR_YELLOW); // Left side
  drawLine(sunX, sunY, sunX, sunY + sunSize, COLOR_YELLOW); // Bottom side
  drawLine(sunX, sunY, sunX, sunY - sunSize, COLOR_YELLOW); // Top side
}


void drawLine(int x0, int y0, int x1, int y1, int color)
{
  int dx = abs(x1 - x0);
  int dy = abs(y1 - y0);
  int sx = (x0 < x1) ? 1 : -1;
  int sy = (y0 < y1) ? 1 : -1;
  int err = dx - dy;

  while (1)
  {
    drawPixel(x0, y0, color);
    if (x0 == x1 && y0 == y1)
      break;
    int e2 = 2 * err;
    if (e2 > -dy)
    {
      err -= dy;
      x0 += sx;
    }
    if (e2 < dx)
    {
      err += dx;
      y0 += sy;
    }
  }
}


