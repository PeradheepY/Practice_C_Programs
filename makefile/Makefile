# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall

# Target executable
TARGET = program

# Source files
SRC = hello.c

# Rule to compile the program
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Rule to clean up object files and executable
clean:
	rm -f $(TARGET)

