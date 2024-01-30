# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation
# ****************************************************

CC = g++
CFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
# ****************************************************

q1: q1.o
	$(CC) $(CFLAGS) -o q1  q1.o

# The main.o target can be written more simply

q1.o: q1.cc
	$(CC) $(CFLAGS) -c q1.cc

q2: q2.o
	$(CC) $(CFLAGS) -o q2  q2.o

# The main.o target can be written more simply

q2.o: q2.cc
		$(CC) $(CFLAGS) -c q2.cc
