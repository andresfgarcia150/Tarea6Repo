
fileOut.txt: main.o slopes.o functions.o
	cc -lm main.o slopes.o functions.o -o prueba.exe
	./prueba.exe
	gnuplot graphics.gp

main.o: main.c
	cc -c main.c

slopes.o: slopes.c
	cc -c slopes.c

functions.o: functions.c
	cc -c functions.c

all: prueba.exe

clean:
	rm -f *.o

