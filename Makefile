CC = g++
CFLAGS = -std=c++17 -O2 -Wall -Wextra
SRC = main.cpp
TARGET = hotel

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET) *.o
