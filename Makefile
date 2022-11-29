all: teslib.o
	gcc -o test.exe test.c teslib.o
teslib.o:
	gcc -o teslib.o -c teslib/mylib.c
time-recursive: teslib.o 
	gcc -o timerecursive.exe timerecursive.c teslib.o
time-iterative: teslib.o
	gcc -o timeiterative.exe timeiterative.c teslib.o
space-recursive: teslib.o 
	gcc -o spacerecursive.exe spacerecursive.c teslib.o 
space-iterative: teslib.o
	gcc -o spaceiterative.exe spaceiterative.c teslib.o
clear:
	rm -rf *.out
	rm -rf *.o