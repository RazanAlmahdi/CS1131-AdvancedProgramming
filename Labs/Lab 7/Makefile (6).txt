# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation
# ****************************************************

CC = g++
CFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
# ****************************************************

studentScores: studentScores.o
	$(CC) $(CFLAGS) -o studentScores  studentScores.o

# The studentScores.o target can be written more simply

studentScores.o: studentScores.cc
	$(CC) $(CFLAGS) -c studentScores.cc
