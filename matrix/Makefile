TAG = gcc
FLAGS = -Wall -Werror -Wextra
all: funcii run

full: 
	@${TAG} ${FLAGS} ocnova.c main.c -o funcii

funcii: osnova.o main.o
	$(TAG) osnova.o main.o -o funcii

osnova.o: osnova.c
	$(TAG) -c osnova.c -o osnova.o

main.o: main.c
	$(TAG) -c main.c -o main.o
		
clean:
	@rm -rf *.out matrix

run:
	@./funcii



