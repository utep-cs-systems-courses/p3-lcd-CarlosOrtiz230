student@systems-vm:~/p3-lcd-CarlosOrtiz230> rm dir myProgram
rm: cannot remove 'dir': No such file or directory
rm: cannot remove 'myProgram': Is a directory
student@systems-vm:~/p3-lcd-CarlosOrtiz230> ls
h  lcdLib  lib  LICENSE  Makefile  msquares  myProgram  README.md  timerLib  wakedemo
student@systems-vm:~/p3-lcd-CarlosOrtiz230> rm dir myProgram
rm: cannot remove 'dir': No such file or directory
rm: cannot remove 'myProgram': Is a directory
student@systems-vm:~/p3-lcd-CarlosOrtiz230> rm myProgram
rm: cannot remove 'myProgram': Is a directory
student@systems-vm:~/p3-lcd-CarlosOrtiz230> rm -r myPRogram
rm: cannot remove 'myPRogram': No such file or directory
student@systems-vm:~/p3-lcd-CarlosOrtiz230> ls
h  lcdLib  lib  LICENSE  Makefile  msquares  myProgram  README.md  timerLib  wakedemo
student@systems-vm:~/p3-lcd-CarlosOrtiz230cd > myProgram
If 'myProgram' is not a typo you can use command-not-found to lookup the package that contains it, like this:
    cnf myProgram
student@systems-vm:~/p3-lcd-CarlosOrtiz230> cd myProgram
student@systems-vm:~/p3-lcd-CarlosOrtiz230/myProgram> ls
draws.o  #Makefile#  runner.o  screen.elf  #stateMachine.c#  stateMachine.o  wdt_handler.o
student@systems-vm:~/p3-lcd-CarlosOrtiz230/myProgram> cd ..
student@systems-vm:~/p3-lcd-CarlosOrtiz230> rm -r myProgram
student@systems-vm:~/p3-lcd-CarlosOrtiz230> ls
h  lcdLib  lib  LICENSE  Makefile  msquares  README.md  timerLib  wakedemo
student@systems-vm:~/p3-lcd-CarlosOrtiz230> mkdir program
student@systems-vm:~/p3-lcd-CarlosOrtiz230> ls
h  lcdLib  lib  LICENSE  Makefile  msquares  program  README.md  timerLib  wakedemo
student@systems-vm:~/p3-lcd-CarlosOrtiz230> 