#include <msp430.h>
#include "stateMachine.h"
#include "switches.h"
#include "myDraws.h"

void state_advance(int state){ 
 switch (state) {
    case 1:
      moveUp();
      break;
    case 2:
       moveDown()
       break;
    case 3:
      moveLeft();
      break;
    case 4:
      moveRight();
       break;
      
    default:
      
      break;
  }
}
