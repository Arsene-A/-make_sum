all: add

add: main.o add.o
	g++ -o add main.o add.o

main.o: main.cpp
	g++ -c main.cpp

add.o: add.cpp
	g++ -c add.cpp

clean:
	rm *.o add
