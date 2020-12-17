myBody.exe: myBody.o func1.o
		gcc -o myBody.exe myBody.o func1.o

myBody.o: myBody.c func1.h
		gcc -c myBody.c

func1.o: func1.c func1.h
		gcc -c func1.c

run:
		myBody.exe

clean:
		rm *.o
