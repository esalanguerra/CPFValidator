CC = gcc
CFLAGS = -Iinclude -Wall
TARGET = CPFValidator

all: $(TARGET)

$(TARGET): src/main.c src/cpf_validator.c
	$(CC) $(CFLAGS) -o $(TARGET) src/main.c src/cpf_validator.c

clean:
	rm -f $(TARGET)
