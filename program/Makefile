COMMON_OBJECTS		= draws.o p2_interrupt_handler.o stateMachine.o switches.o buzzer.o sounds.o
>>>>>>> 0ff52f2b82ec7c21c0aa524ce37c8218da07d2de
CPU             	= msp430g2553
CFLAGS          	= -mmcu=${CPU} -Os -I../h
LDFLAGS		= -L../lib -L/opt/ti/msp430_gcc/include/ 
CC              = msp430-elf-gcc
AS              = msp430-elf-gcc -mmcu=${CPU} -c

all: main.elf #what are .elf files?

main.elf: ${COMMON_OBJECTS} main.o
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ -lTimer -lLcd 

load: main.elf
	msp430loader.sh $^

clean:
	rm -f *.o *.elf
