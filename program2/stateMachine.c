#include <msp430.h>
#include "stateMachine.h"
#include "switches.h"
#include "myDraws.h"

void state_advance(int state){ 
 switch (state) {
    case 1:
      move(&rectangle1,state);
      break;
    case 2:
       move(&rectangle1,state);
       break;
    case 3:
      move(&rectangle1,state);
      break;
    case 4:
      move(&rectangle1,state);
       break;  
  default:
      break;
  }
}
