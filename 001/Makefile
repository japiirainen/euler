CFLAGS=-Wall -Wextra -Werror
BIN=./bin

main: main.c
	@mkdir -p bin
	$(CC) $(CFLAGS) -o $(BIN)/main main.c

.PHONY: run
run: main
	$(BIN)/main
