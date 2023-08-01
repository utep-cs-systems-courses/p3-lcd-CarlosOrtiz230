# makfile configuration

CPU             	= msp430g2553

CFLAGS          	= -mmcu=${CPU} -Os -I../h

LDFLAGS		= -L../lib -L/opt/ti/msp430_gcc/include/

#switch the compiler (for the internal make rules)

CC              = msp430-elf-gcc
AS              = msp430-elf-gcc -mmcu=${CPU} -c

all: screen.elf

#additional rules for files

screen.elf: ${COMMON_OBJECTS} runner.o wdt_handler.o stateMachine.o draws.o

	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ -lTimer -lLcd
load: screen.elf
	msp430loader.sh $^
clean:
	rm -f *.o *.elf
