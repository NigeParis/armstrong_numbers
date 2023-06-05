EXEC=armstrong_numbers
CFLAGS=-Wall -Wextra -Werror
CC=gcc
FUNCTION=armstrong_numbers

.PHONY: run
run: $(EXEC)
	./$(EXEC)

$(EXEC): main.o $(FUNCTION).o
	$(CC) $^ -o $(EXEC)

main.o: main.c $(FUNCTION).h
	$(CC) $(CFLAGS) -c main.c

$(FUNCTION).o: $(FUNCTION).c
	$(CC) $(CFLAGS) -c $(FUNCTION).c


.PHONY: clean
clean:
	rm -rf $(EXEC) *.o
