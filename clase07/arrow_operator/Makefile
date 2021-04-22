CC = gcc
OBJS = main.c

all: $(OBJS)
	$(CC) $(OBJS) -o main
	./main

main.o: main.c
	$(CC) -c main.c
			
Clean:
	rm -f $(OBJS) main *~

