#include <msp430.h>
#include "stateMachine.h"
#include "switches.h"
#include "myDraws.h"

void state_advance(int state){ 
 switch (state) {
    case 1:
      move(&rectangle,"U");
      break;
    case 2:
       move((&rectangle1,"D");
       break;
    case 3:
      move((&rectangle1,"L");
      break;
    case 4:
      move((&rectangle1,"R");
       break;
      
    default:
      
      break;
  }
}
