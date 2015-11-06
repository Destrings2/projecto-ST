all: shortlonglines

shortlonglines: shortlonglines.o
	g++ -o $@ $<

run1: shortlonglines
	./shortlonglines < shortlonglines01.in > shortlonglines01_.out
	diff shortlonglines01_.out shortlonglines01.out
	rm shortlonglines01_.out

run2: shortlonglines
	./shortlonglines < shortlonglines02.in > shortlonglines02_.out
	diff shortlonglines02_.out shortlonglines02.out
	rm shortlonglines02_.out

clean:
	rm -f shortlonglines *.o *.*~
