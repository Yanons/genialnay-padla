CC = gcc
FLAGS = -Wall -Werror -Wextra

all: coffe run

coffe:
	@${CC} ${FLAGS} coffe.c func.c -o coffe

clean:
	@rm -rf *.out coffe

run:
	@./coffe

rebuild: clean coffe run


