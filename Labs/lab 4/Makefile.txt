# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation
# ****************************************************

CC = g++
CFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
# ****************************************************

lab4: lab4.o
	$(CC) $(CFLAGS) -o lab4  lab4.o

# The main.o target can be written more simply

lab4.o: lab4.cc
	$(CC) $(CFLAGS) -c lab4.cc
