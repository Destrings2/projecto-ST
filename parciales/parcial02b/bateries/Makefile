all: workingBateries

OBJECTS=workingBateries.o bateries.o

workingBateries: $(OBJECTS)
	g++ -o $@ $(OBJECTS)

clean:
	rm -f *.o *.*~ *~ workingBateries

run1: workingBateries
	@./workingBateries < workingBateries01.in > workingBateries01_.out
	@diff workingBateries01.out workingBateries01_.out
	@rm -f workingBateries01_.out

run1d: workingBateries
	@./workingBateries < workingBateries01.in

run2: workingBateries
	@./workingBateries < workingBateries02.in > workingBateries02_.out
	@diff workingBateries02.out workingBateries02_.out
	@rm -f workingBateries02_.out

run2d: workingBateries
	@./workingBateries < workingBateries02.in
