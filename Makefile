CPP = g++  

all: klasy.o menedzer.o main.cpp
	$(CPP) klasy.o menedzer.o main.cpp -std=c++11 -o aplikacja

klasy.o: klasy.cpp  klasy.h
	$(CPP) klasy.cpp -std=c++11 -c -o klasy.o

menedzer.o: menedzer.cpp  menedzer.h
	$(CPP) klasy.cpp -std=c++11 -c -o klasy.o

clean:
	rm -f *.o aplikacja