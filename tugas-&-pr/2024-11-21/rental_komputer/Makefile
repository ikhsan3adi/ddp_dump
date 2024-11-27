CC = gcc
CFLAGS = -Wall -g
OBJ = main.o rental.o file.o search.o
EXEC = rental_komputer

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

main.o: main.c rental.h file.h search.h
	$(CC) $(CFLAGS) -c main.c -o main.o

rental.o: rental.c rental.h
	$(CC) $(CFLAGS) -c rental.c -o rental.o

file.o: file.c file.h
	$(CC) $(CFLAGS) -c file.c -o file.o

search.o: search.c search.h
	$(CC) $(CFLAGS) -c search.c -o search.o

clean:
	rm -f $(OBJ)
