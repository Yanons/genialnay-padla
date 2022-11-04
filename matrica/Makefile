TAG = gcc
FLAGS = -Wall -Werror -Wextra
all: funcii run

funcii: funcii.o history.o
	${TAG} ${FLAGS} funcii.o history.o -o funcii

funcii.o: funcii.c
	${TAG} ${FLAGS} funcii.c history.c -c 

history.o: history.c
	${TAG} ${FLAGS} -c history.c -o history.o
		
clean:
	@rm -rf *.out *.o funcii 

run:
	@./funcii



