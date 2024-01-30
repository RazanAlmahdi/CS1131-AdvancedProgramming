# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation
# ****************************************************

CC = g++
CFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
# ****************************************************

A3_q1: A3_q1.o
		$(CC) $(CFLAGS) -o A3_q1  A3_q1.o

# The A3_q1.o target can be written more simply

A3_q1.o: A3_q1.cc
		$(CC) $(CFLAGS) -c A3_q1.cc

A3_q2: A3_q2.o
		$(CC) $(CFLAGS) -o A3_q2  A3_q2.o

# The A3_q2.o target can be written more simply

A3_q2.o: A3_q2.cc
		$(CC) $(CFLAGS) -c A3_q2.cc

A3_q3: A3_q3.o
		$(CC) $(CFLAGS) -o A3_q3  A3_q3.o

# The A3_q3.o target can be written more simply

A3_q3.o: A3_q3.cc
		$(CC) $(CFLAGS) -c A3_q3.cc

A3_q4: A3_q4.o
		$(CC) $(CFLAGS) -o A3_q4  A3_q4.o

# The A3_q4.o target can be written more simply

A3_q4.o: A3_q4.cc
		$(CC) $(CFLAGS) -c A3_q4.cc
