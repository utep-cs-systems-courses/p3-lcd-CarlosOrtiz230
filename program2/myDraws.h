#ifndef _MY_DRAWS_H_
#define _MY_DRAWS_H_
#include <lcdutils.h>

typedef struct 
{
    int row, col,old_row,old_col;
    u_char height;
    u_char width;
} Rectangle;

void move();
void startRectangle();
void drawRectangle();

extern Rectangle rectangle1;

#endif
