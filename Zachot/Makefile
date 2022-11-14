TAG = gcc
FLAGS = -Wall -Werror -Wextra
all: blyyyy run

blyyyy: func.o zachot.o
	${TAG} ${FLAGS} func.o zachot.o -o blyyyy

func.o: func.c
	${TAG} ${FLAGS} func.c zachot.c -c 

zachot.o: zachot.c
	${TAG} ${FLAGS} -c zachot.c -o zachot.o 
		
clean:
	@rm -rf *.out *.o blyyyy 

run:
	@./blyyyy
