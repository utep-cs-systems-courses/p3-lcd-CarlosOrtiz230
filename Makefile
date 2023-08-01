
all:
	(cd timerLib; make install)
	(cd lcdLib; make install)
	(cd wakedemo; make)
#	(cd myProgram; make install)
#	(cd myProgram; make)
#	(cd circledemo; make)

doc:
	rm -rf doxygen_docs
	doxygen Doxyfile
clean:
	(cd timerLib; make clean)
	(cd lcdLib; make clean)
#	(cd circledemo; make clean)
	(cd wakedemo; make clean)
#	(cd myPrograml make clean)
	xrm -rf lib h
	rm -rf doxygen_docs/*


