TARGETS	=	counter

all:	$(TARGETS)

counter:	counterTestDriver.o counterType.o
	g++ -o counter counterTestDriver.o counterType.o

counterTestDriver.o:	counterTestDriver.cc counterType.h
	g++ -c counterTestDriver.cc

counterType.o: counterType.cc counterType.h
	g++ -c counterType.cc

TARGETS	=	product

all:	$(TARGETS)

product:	productTestDriver.o productType.o
	g++ -o product productTestDriver.o productType.o

productTestDriver.o:	productTestDriver.cc productType.h
	g++ -c productTestDriver.cc

productType.o: productType.cc productType.h
	g++ -c productType.cc

CC = g++
CFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
# ****************************************************

ptr: ptr.o
	$(CC) $(CFLAGS) -o ptr  ptr.o

# The main.o target can be written more simply

ptr.o: ptr.cc
	$(CC) $(CFLAGS) -c ptr.cc

clean:
	rm -f *.o counter product
