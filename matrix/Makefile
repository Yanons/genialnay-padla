# терминал зависает при вызове make
TAG = gcc
FLAGS = -Wall -Werror -Wextra
# файлы тоже можно переносить в переменные(пример):
#SRCS = ocnova.c main.c
#OBJS = ${SRCS:.c=.o}

all: funcii run

full: 
	${TAG} ${FLAGS} ocnova.c main.c -o full

funcii: osnova.o main.o
	${TAG} ${FLAGS} osnova.o main.o -o funcii

# не обязательно для создания объектных файлов делать две цели
osnova.o: osnova.c
	${TAG} ${FLAGS} -c osnova.c -o osnova.o

main.o: main.c
	${TAG} ${FLAGS} -c main.c -o main.o
		
# если научился раздельно компилировать, то не забывай и чистить после себя объектники *.o
# у теббя исполняемый файл называется как (9 строка)?, а ты удаляешь какой то matrix 
clean:
	@rm -rf *.out matrix

run:
	@./funcii



