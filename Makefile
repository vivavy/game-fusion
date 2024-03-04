__main__: build
	@./main

build:
	@g++ -Iinclude -Wall -g src/main.cpp -o main -lGL -lSDL2 -std=c++17
