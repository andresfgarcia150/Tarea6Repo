graph1.svg: fileOut.txt


fileOut.txt: prueba.exe
	./prueba.exe

prueba.exe: main.o slopes.o functions.o
	cc -lm main.o slopes.o functions.o -o prueba.exe

main.o: main.c
	cc -c main.c

slopes.o: slopes.c
	cc -c slopes.c

functions.o: functions.c
	cc -c functions.c

all: prueba.exe

clean:
	rm -f *.o

