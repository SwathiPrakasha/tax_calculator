###################################
#       Name    : Swathi Prakasha #
#       ZID     : Z1817929        #
#       course  : CSCI 689        #
#       Section : 1               #
#       Assignmt: 2               #
#       duedate : 02/08/2017      #
##################################


#Makefile variable
CC = g++
CCFLAGS = -c -Wall


#Makefile Rules
assign2:assign2.o functions.o
	$(CC) -o assign2 assign2.o functions.o

assign2.o:assign2.cc header.h
	$(CC) $(CCFLAGS) assign2.cc

functions.o:functions.cc header.h
	$(CC) $(CCFLAGS) functions.cc

#Psuedo-clean command, which removes all the object files and particular executable file.
clean:
	-rm *.o assign2
