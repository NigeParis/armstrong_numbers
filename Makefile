EXEC=armstrong_numbers
CFLAGS=-Wall
CFLAGS+=-Wextra
CFLAGS+=-Werror
CC=gcc
SOURCE_FILE=armstrong_numbers

.PHONY: run
run: $(EXEC)
	@echo "\nRunning...file : $(EXEC)"
	./$(EXEC)
	@echo "\n"

$(EXEC): main.o $(SOURCE_FILE).o
	@echo "\nLinking.............."
	$(CC) $^ -o $(EXEC)

main.o: main.c $(SOURCE_FILE).h
	@echo "\nCompiling main.............."
	$(CC) $(CFLAGS) -c main.c

$(SOURCE_FILE).o: $(SOURCE_FILE).c
	@echo "\nCompiling source file............."
	$(CC) $(CFLAGS) -c $(SOURCE_FILE).c


.PHONY: tidy
tidy:
	@echo "\nCleanng all .o files......."
	rm -rf *.o
	@echo "\n"

.PHONY: clean
clean:
	@echo "\nClean up all ......."
	rm -rf $(EXEC) *.o
	@echo "\n"
