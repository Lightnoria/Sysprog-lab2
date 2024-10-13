CC = g++
CFLAGS = -I./include
SRC = src/add.cpp src/subtract.cpp
OBJ = add.o subtract.o
TARGET = calculator
LIB = libcalculator.a

all: $(TARGET)

$(LIB): $(OBJ)
	$(AR) rcs $(LIB) $(OBJ)

$(TARGET): main.o $(LIB)
	$(CC) -o $(TARGET) main.o -L. -lcalculator

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

add.o: src/add.cpp
	$(CC) $(CFLAGS) -c src/add.cpp

subtract.o: src/subtract.cpp
	$(CC) $(CFLAGS) -c src/subtract.cpp

clean:
	rm -f *.o $(TARGET) $(LIB)
