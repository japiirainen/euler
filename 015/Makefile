CFLAGS=-Wall -Wextra -Werror -lgmpxx -lgmp
BIN=./bin

main: main.c
	@mkdir -p bin
	$(CC) $(CFLAGS) -o $(BIN)/main main.c

.PHONY: run
run: main
	$(BIN)/main

.PHONY: python
python:
	python3 main.py

.PHONY: math
math:
	./main.mathematica
