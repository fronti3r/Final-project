CC=gcc
CFLAGS=-Wall
EXECUTABLE=studentApp
list: linkedlist.o studentApp
	$(CC) $(CFLAGS) linkedlist.o studentApp.c -o $(EXECUTABLE)
linkedlist.o: linkedlist.h 
clean:
	rm -rf *.o *.gch $(EXECUTABLE)
leaks:
	valgrind --leak-check=yes ./$(EXECUTABLE)
