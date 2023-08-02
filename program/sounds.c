#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"
#include "led.h"

void melody(int counter) {
  //specific pitch number
 int notes[] = {698, 587, 698, 587, 587, 0, 659, 0, 659, 0, 659, 0, 659, 659, 698, 587, 698, 587, 587};
  int numNotes = sizeof(notes) / sizeof(notes[0]);//array size
  // Play each note twice simultaneously
  int cycle;
  for (int i = 0; i < numNotes; i++) {
    //first note turn off red and on green
    P1OUT |= LED_GREEN;
    __delay_cycles(10000);
    P1OUT &= ~LED_RED;
    buzzer_set_period(notes[i]);
    __delay_cycles(1000000);
    //little wait

    //the opposite lights
    P1OUT |= LED_RED;
    __delay_cycles(100000);
    P1OUT &= ~LED_GREEN;
    buzzer_set_period(notes[i]); 
    __delay_cycles(7000000);
  }
  //after notes , there both lights on , then off , and repeat cycle
  __delay_cycles(1000000);
  P1OUT &= ~LED_RED;
  P1OUT &= ~LED_GREEN;
  __delay_cycles(100000);
  P1OUT |= LED_GREEN;
  P1OUT |= LED_RED;
  if(counter == 3){return;}
  melody(counter++);
}

void elGobiernoGobierna(int counter) {
  // Specific pitch numbers for the melody "El Gobierno Gobierna con su Pierna"
  int notes[] = {
    784, 880, 988, 880,   // F A B A
    784, 880, 988, 880,   // F A B A
    988, 1047, 988, 880,  // B C B A
    784, 988, 880,        // F B A
    880, 988, 1047, 988,  // A B C B
    880, 988, 1047, 988,  // A B C B
    1047, 1175, 1047, 988, // C D C B
    880, 988, 880,        // A B A
    784, 880, 988, 880,   // F A B A
    784, 880, 988, 880,   // F A B A
    988, 1047, 988, 880,  // B C B A
    784, 988, 880,        // F B A
    880, 988, 1047, 988,  // A B C B
    880, 988, 1047, 988,  // A B C B
    1047, 1175, 1047, 988, // C D C B
    880, 988, 880,        // A B A
    784, 880, 988, 880,   // F A B A
    784, 880, 988, 880,   // F A B A
    988, 1047, 988, 880,  // B C B A
    784, 988, 880,        // F B A
    880, 988, 1047, 988,  // A B C B
    880, 988, 1047, 988,  // A B C B
    1047, 1175, 1047, 988, // C D C B
    880, 988, 880,        // A B A
    0    } ;                // Pause at the end
 
  
  int numNotes = sizeof(notes) / sizeof(notes[0]); // Array size
  
 // Play each note twice simultaneously
  int cycle;
  for (int i = 0; i < numNotes; i++) {
    //first note turn off red and on green
    P1OUT |= LED_GREEN;
    __delay_cycles(10000);
    P1OUT &= ~LED_RED;
    buzzer_set_period(notes[i]);
    __delay_cycles(1000000);
    //little wait

    //the opposite lights
    P1OUT |= LED_RED;
    __delay_cycles(100000);
    P1OUT &= ~LED_GREEN;
    buzzer_set_period(notes[i]); 
    __delay_cycles(7000000);
  }
  //after notes , there both lights on , then off , and repeat cycle
  __delay_cycles(1000000);
  P1OUT &= ~LED_RED;
  P1OUT &= ~LED_GREEN;
  __delay_cycles(100000);
  P1OUT |= LED_GREEN;
  P1OUT |= LED_RED;
  if(counter == 3){return;}
  melody(counter++);

  };
  
  int numNotes = sizeof(notes) / sizeof(notes[0]); // Array size
