__main__: build
	@./main

build:
	@g++ -Iinclude -Wall -g src/main.cpp -o main -lGL -lSDL2 -lSDL2main -std=c++17
