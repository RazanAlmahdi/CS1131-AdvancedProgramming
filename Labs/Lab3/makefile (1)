# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation
# ****************************************************

CC = g++
CFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
# ****************************************************

ex1: ex1.o
	$(CC) $(CFLAGS) -o ex1  ex1.o

# The ex1.o target can be written more simply

ex1.o: ex1.cc
	$(CC) $(CFLAGS) -c ex1.cc

ex2: ex2.o
	$(CC) $(CFLAGS) -o ex2  ex2.o

# The ex2.o target can be written more simply

ex2.o: ex2.cc
	$(CC) $(CFLAGS) -c ex2.cc

ex3: ex3.o
	$(CC) $(CFLAGS) -o ex3  ex3.o

# The ex3.o target can be written more simply

ex3.o: ex3.cc
	$(CC) $(CFLAGS) -c ex3.cc
