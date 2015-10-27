.phony: clean

all: doIntercalate

OBJECTS=doIntercalate.o intercalate.o

doIntercalate: $(OBJECTS)
	g++ -o $@ $(OBJECTS)

clean:
	rm -f *.o *.cpp~ *.h~ *.in~ *.out~ *~ doIntercalate

run1: doIntercalate
	./doIntercalate < doIntercalate01.in > doIntercalate01_.out
	diff doIntercalate01.out doIntercalate01_.out
	rm -f doIntercalate01_.out

run1d: doIntercalate
	./doIntercalate < doIntercalate01.in

run2: doIntercalate
	./doIntercalate < doIntercalate02.in > doIntercalate02_.out
	diff doIntercalate02.out doIntercalate02_.out
	rm -f doIntercalate02_.out

run2d: doIntercalate
	./doIntercalate < doIntercalate02.in




