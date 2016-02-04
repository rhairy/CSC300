CFLAGS = -Wall -Werror -c -std=c++11
LFLAGS = -Wall -Werror
OBJS = main.o Extensions.o
CC = g++

all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o all

main.o: main.cpp Extensions.cpp Extensions.h
	$(CC) $(CFLAGS) main.cpp -o main.o

Extensions.o: Extensions.cpp Extensions.h
	$(CC) $(CFLAGS) Extensions.cpp -o Extensions.o

clean:
	rm -rf ./*.o
