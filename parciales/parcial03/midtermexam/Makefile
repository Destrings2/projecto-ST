all: grademidtermexam

grademidtermexam: grademidtermexam.o
	g++ -o $@ $<

run1: grademidtermexam
	./grademidtermexam < grademidtermexam01.in > grademidtermexam01_.out
	diff grademidtermexam01_.out grademidtermexam01.out
	rm grademidtermexam01_.out

run2: grademidtermexam
	./grademidtermexam < grademidtermexam02.in > grademidtermexam02_.out
	diff grademidtermexam02_.out grademidtermexam02.out
	rm grademidtermexam02_.out

clean:
	rm -f grademidtermexam *.o *.*~
