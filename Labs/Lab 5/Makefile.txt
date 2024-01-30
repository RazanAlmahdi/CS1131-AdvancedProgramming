# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation
# ****************************************************

CC = g++
CFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
# ****************************************************

lab5_ex2: lab5_ex2.o
		$(CC) $(CFLAGS) -o lab5_ex2  lab5_ex2.o

# The lab5_ex2.o target can be written more simply

lab5_ex2.o: lab5_ex2.cc
	$(CC) $(CFLAGS) -c lab5_ex2.cc

lab5_ex3: lab5_ex3.o
	$(CC) $(CFLAGS) -o lab5_ex3  lab5_ex3.o

# The lab5_ex3.o target can be written more simply

lab5_ex3.o: lab5_ex3.cc
	$(CC) $(CFLAGS) -c lab5_ex3.cc

lab5_ex5: lab5_ex5.o
		$(CC) $(CFLAGS) -o lab5_ex5  lab5_ex5.o

# The lab5_ex5.o target can be written more simply

lab5_ex5.o: lab5_ex5.cc
	$(CC) $(CFLAGS) -c lab5_ex5.cc

lab5_ex6: lab5_ex6.o
		$(CC) $(CFLAGS) -o lab5_ex6  lab5_ex6.o

# The lab5_ex6.o target can be written more simply

lab5_ex6.o: lab5_ex6.cc
	$(CC) $(CFLAGS) -c lab5_ex6.cc
