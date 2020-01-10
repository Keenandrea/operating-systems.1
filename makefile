CC = gcc
CFLAGS = -g
TARGET = dt
OBJS = main.o flags.o prints.o calls.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
main.o: main.c
	$(CC) $(CFLAGS) -c main.c
flags.o: flags.c flags.h
	$(CC) $(CFLAGS) -c flags.c
prints.o: prints.c prints.h
	$(CC) $(CFLAGS) -c prints.c
calls.o: calls.c calls.h
	$(CC) $(CFLAGS) -c calls.c
clean:
	rm -f *.o $(TARGET)
