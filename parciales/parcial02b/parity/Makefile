all: checkParity

OBJECTS=checkParity.o parity.o parityTest.o

checkParity: $(OBJECTS)
	g++ -o $@ $(OBJECTS)

parityTest.o: parityTest.cpp parityTest.h

clean:
	rm -f checkParity *.*~ *~ *.o

run1: checkParity
	@./checkParity < checkParity01.in > checkParity01_.out
	@diff checkParity01.out checkParity01_.out
	@rm -f checkParity01_.out

run1d: checkParity
	@./checkParity < checkParity01.in

run2: checkParity
	@./checkParity < checkParity02.in > checkParity02_.out
	@diff checkParity02.out checkParity02_.out
	@rm -f checkParity02_.out

run2d: checkParity
	@./checkParity < checkParity02.in


