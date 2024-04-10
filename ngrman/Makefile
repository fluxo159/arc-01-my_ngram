CC = gcc
CFLAGS = -Wall -Wextra

TARGET = main
SRC = my_ngram.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)