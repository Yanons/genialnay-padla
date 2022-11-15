TAG = gcc
FLAGS = -Wall -Werror -Wextra
all: funcii run

funcii: keep.o main.o
	${TAG} ${FLAGS} keep.o main.o -o funcii

funcii.o: keep.c
	${TAG} ${FLAGS} keep.c main.c -c 

history.o: main.c
	${TAG} ${FLAGS} -c main.c -o main.o
		
clean:
	@rm -rf *.out *.o funcii 

run:
	@./funcii



