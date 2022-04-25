CC=gcc
CFLAGS=-Wall
EXECUTABLE=studentApp
list: studentApp
	$(CC) $(CFLAGS) studentApp.c -o $(EXECUTABLE)
clean:
	rm -rf *.o *.gch $(EXECUTABLE)
leaks:
	valgrind --leak-check=yes ./$(EXECUTABLE)
