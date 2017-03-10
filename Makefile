CC = g++
OBJCS = main.o numero.o letraM.o letram.o imprimir.o
CFLAGS = -c -W -Wall -pedantic -ansi -O0 
PROG = WordCount
LIB = library.h

all: $(PROG)

$(PROG): $(OBJCS)
	$(CC) $(OBJCS) -o $(PROG)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

numero.o: numero.cpp
	$(CC) $(CFLAGS) numero.cpp

letraM.o: letraM.cpp
	$(CC) $(CFLAGS) letraM.cpp

letram.o: letram.cpp
	$(CC) $(CFLAGS) letram.cpp

imprimir.o: imprimir.cpp
	$(CC) $(CFLAGS) imprimir.cpp

clean: 
	rm -rf *.o $(PROG)
