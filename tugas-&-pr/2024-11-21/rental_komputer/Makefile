CC = gcc
CFLAGS = -Wall -g
OBJ = main.o rental.o date.o
EXEC = rental_komputer

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

main.o: main.c rental.h date.h
	$(CC) $(CFLAGS) -c main.c -o main.o

rental.o: rental.c rental.h
	$(CC) $(CFLAGS) -c rental.c -o rental.o

date.o: date.c date.h
	$(CC) $(CFLAGS) -c date.c -o date.o

clean:
	rm -f $(OBJ)
