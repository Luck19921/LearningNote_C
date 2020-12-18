#註解 Marco = value
#CC變數的值將會是gcc
CC = gcc

run:
		myBody.exe

.PHONY: clean
clean:
		@echo "Now Cleanning..."
		rm *.o

myBody.exe: myBody.o func1.o
		$(CC) -o myBody.exe myBody.o func1.o

myBody.o: myBody.c func1.h
		$(CC) -c myBody.c

func1.o: func1.c func1.h
		$(CC) -c func1.c
