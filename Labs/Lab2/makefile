# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
# ****************************************************
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
# ****************************************************

Q2: Q2.o 
	$(CC) $(CFLAGS) -o Q2  Q2.o
 
# The Q2.o target can be written more simply

Q2.o: Q2.cc 
	$(CC) $(CFLAGS) -c Q2.cc