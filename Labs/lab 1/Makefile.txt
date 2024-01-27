# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation
# ****************************************************

CC = g++
CFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
# ****************************************************

main: main.o
	$(CC) $(CFLAGS) -o main  main.o

# The main.o target can be written more simply

main.o: main.cc
	$(CC) $(CFLAGS) -c main.cc

main2: main2.o
		$(CC) $(CFLAGS) -o main2  main2.o

	# The main.o target can be written more simply

	main2.o: main2.cc
		$(CC) $(CFLAGS) -c main2.cc
