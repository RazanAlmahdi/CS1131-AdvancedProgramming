# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation
# ****************************************************

CC = g++
CFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
# ****************************************************

lab3_q1: lab3_q1.o
	$(CC) $(CFLAGS) -o lab3_q1  lab3_q1.o

# The lab3_q1.o target can be written more simply

lab3_q1.o: lab3_q1.cc
	$(CC) $(CFLAGS) -c lab3_q1.cc

lab3_q2: lab3_q2.o
	$(CC) $(CFLAGS) -o lab3_q2  lab3_q2.o

# The lab3_q2.o target can be written more simply

lab3_q2.o: lab3_q2.cc
	$(CC) $(CFLAGS) -c lab3_q2.cc

lab3_q3: lab3_q3.o
	$(CC) $(CFLAGS) -o lab3_q3  lab3_q3.o

# The lab3_q3.o target can be written more simply

lab3_q3.o: lab3_q3.cc
	$(CC) $(CFLAGS) -c lab3_q3.cc
