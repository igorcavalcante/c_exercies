CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
SRC_READER = reader.c
SRC_WRITER = writer.c
EXEC_READER = reader
EXEC_WRITER = writer

.PHONY: all clean run_reader run_writer

all: $(EXEC_READER) $(EXEC_WRITER)

$(EXEC_READER): $(SRC_READER)
	$(CC) $(CFLAGS) -o $@ $<

$(EXEC_WRITER): $(SRC_WRITER)
	$(CC) $(CFLAGS) -o $@ $<

run_reader: $(EXEC_READER)
	./$(EXEC_READER)

run_writer: $(EXEC_WRITER)
	./$(EXEC_WRITER)

clean:
	rm -f $(EXEC_READER) $(EXEC_WRITER)