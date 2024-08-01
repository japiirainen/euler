CFLAGS=-Wall -Wextra -Werror
BIN=./bin

.PHONY: all
all: run python math

main: main.cc
	@mkdir -p bin
	$(CXX) $(CFLAGS) -o $(BIN)/main main.cc

.PHONY: run
run: main
	$(BIN)/main

.PHONY: python
python:
	python3 main.py

.PHONY: math
math:
	./main.mathematica
