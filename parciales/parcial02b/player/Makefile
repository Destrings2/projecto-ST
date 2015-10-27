all: gameSimulator

OBJECTS=gameSimulator.o player.o

gameSimulator: $(OBJECTS)
	g++ -o $@ $(OBJECTS)

clean:
	rm -f *.o gameSimulator *.cpp~ *.h~ *.in~ *.out~

run1: gameSimulator
	@./gameSimulator < gameSimulator01.in > gameSimulator01_.out
	@diff gameSimulator01.out gameSimulator01.out
	@rm -f gameSimulator01_.out

run1d: gameSimulator
	@./gameSimulator < gameSimulator01.in

run2: gameSimulator
	@./gameSimulator < gameSimulator02.in > gameSimulator02_.out
	@diff gameSimulator02.out gameSimulator02.out
	@rm -f gameSimulator02_.out

run2d: gameSimulator
	@./gameSimulator < gameSimulator02.in

