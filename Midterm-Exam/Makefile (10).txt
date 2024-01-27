# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation
# ****************************************************

CC = g++
CFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
# ****************************************************

mid_question1: mid_question1.o
	$(CC) $(CFLAGS) -o mid_question1  mid_question1.o

# The mid_question1.o target can be written more simply

mid_question1.o: mid_question1.cc
	$(CC) $(CFLAGS) -c mid_question1.cc

mid_question2: mid_question2.o
	$(CC) $(CFLAGS) -o mid_question2  mid_question2.o

# The mid_question2.o target can be written more simply

mid_question2.o: mid_question2.cc
	$(CC) $(CFLAGS) -c mid_question2.cc
