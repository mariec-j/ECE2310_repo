Test:
	echo "Test\n"

Pokemon: Pokemon.cpp
	g++ Pokemon.cpp -c

Charmander: Charmander.cpp
	g++ Charmander.cpp -c

main: Pokemon.o Charmander.o
	g++ main.cpp -o main

all: Pokemon Charmander main

run: all
	./main

clean:
	rm -f Pokemon.o Charmander.o main