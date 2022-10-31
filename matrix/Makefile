TAG = gcc
FLAGS = -Wall -Werror -Wextra
all: funcii run

funcii: osnova.o main.o
	${TAG} ${FLAGS} osnova.o main.o -o funcii

osnova.o: osnova.c
	${TAG} ${FLAGS} -c osnova.c -o osnova.o

main.o: main.c
	${TAG} ${FLAGS} -c main.c -o main.o
		
clean:
	@rm -rf *.out funcii
	@rm -rf *.o funcii

run:
	@./funcii



