lab4: all

all: main.o functions.o
	gcc -Wall -Werror -g main.c functions.c -o lab4

main.o: main.c
	gcc -c -Wall -Werror -g main.c -o main.o

functions.o: functions.c
	gcc -c -Wall -Werror -g functions.c -o functions.o

clean: 
	rm -rf *.o
	rm -rf lab4