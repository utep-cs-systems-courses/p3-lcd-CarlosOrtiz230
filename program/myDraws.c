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

void dayHouse()
{
  // Draw the house
  fillRectangle(50, 150, 100, 100, COLOR_BLUE); // Body of the house
  fillRectangle(70, 170, 20, 30, COLOR_RED);    // Door
  fillRectangle(85, 120, 10, 30, COLOR_GREEN);  // Window 1
  fillRectangle(105, 120, 10, 30, COLOR_GREEN); // Window 2
  drawPixel(100, 150, COLOR_BLACK);            // Roof peak
  drawPixel(70, 150, COLOR_BLACK);             // Roof left corner
  drawPixel(130, 150, COLOR_BLACK);            // Roof right corner

  // Draw the sun
  int sunX = 200; // X-coordinate of the sun
  int sunY = 30;  // Y-coordinate of the sun
  int sunRadius = 20; // Radius of the sun
  int numSunRays = 16; // Number of sun rays

  // Draw the sun rays using a for loop
  for (int i = 0; i < numSunRays; i++) {
    double angle = 2 * M_PI * i / numSunRays; // Calculate the angle for each ray
    int endX = sunX + sunRadius * cos(angle); // Calculate the X-coordinate of the end point of the ray
    int endY = sunY + sunRadius * sin(angle); // Calculate the Y-coordinate of the end point of the ray
    drawLine(sunX, sunY, endX, endY, COLOR_YELLOW); // Draw the sun ray
  }

}//method ends



