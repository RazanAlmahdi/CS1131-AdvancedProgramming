# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation
# ****************************************************

CC = g++
CFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
# ****************************************************

A2_q1: A2_q1.o
		$(CC) $(CFLAGS) -o A2_q1  A2_q1.o

# The A2_q1.o target can be written more simply

A2_q1.o: A2_q1.cc
	$(CC) $(CFLAGS) -c A2_q1.cc

A2_q2: A2_q2.o
	$(CC) $(CFLAGS) -o A2_q2  A2_q2.o

# The A2_q2.o target can be written more simply

A2_q2.o: A2_q2.cc
	$(CC) $(CFLAGS) -c A2_q2.cc

A2_q3: A2_q3.o
		$(CC) $(CFLAGS) -o A2_q3  A2_q3.o

# The  A2_q3.o target can be written more simply

A2_q3.o: A2_q3.cc
	$(CC) $(CFLAGS) -c A2_q3.cc
