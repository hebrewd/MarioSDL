CC=g++
CFLAGS=-std=c++11 -Wall
CLIBS=-lSDL2
OBJ=main.o player.o block.o
DIR=$(addprefix dist/,$(OBJ))

mario: $(DIR)
	$(CC) $(CLIBS) -o $@ $^

dist/%.o: src/%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<
