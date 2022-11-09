TAG = gcc
FLAGS = -Wall -Werror -Wextra
all:  funcii idinahui run

funcii: osnova.o main.o
	${TAG} ${FLAGS} osnova.o main.o -o funcii

osnova.o: osnova.c
	${TAG} ${FLAGS} osnova.c main.c -c 

main.o: main.c
	${TAG} ${FLAGS} -c main.c -o main.o
		
clean:
	@rm -rf *.out *.o funcii 

run:
	@./funcii
idinahui:
	@clear



