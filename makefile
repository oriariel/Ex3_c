CC = gcc
AR = ar -rcs
FLAGS = -Wall

all: isort txtfind

isort: isortmain.o isort.o
	$(CC) $(FLAGS) isortmain.o isort.o -o isort
txtfind: txtfilemain.o txtfind.o 
	$(CC) $(FLAGS) txtfilemain.o txtfind.o -o txtfind
isortmain.o: isortmain.c isort.o
	$(CC) $(FLAGS) -c isortmain.c 
isort.o: isort.c
	$(CC) $(FLAGS) -c isort.c
txtfilemain.o: txtfilemain.c txtfind.o
	$(CC) $(FLAGS) -c txtfilemain.c
txtfind.o: txtfind.c
	$(CC) $(FLAGS) -c txtfind.c


.PHONY: clean all

clean:
	rm -f *.o *.a *.so out isort txtfind