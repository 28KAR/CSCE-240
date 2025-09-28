# makefile for building a linking the pieces we'll use to create
# some functions and test them
# function prototypes in a somefunctions.h
# function implementations in somefunctions.cc
# test the functions in a source file with a main

sept9 : sept9.o somefunctions.o
	g++ -Wall -std=c++17 $^ -o $@

sept9.o : sept9.cc somefunctions.h
	g++ -Wall -std=c++17 -c $<

somefunctions.o : somefunctions.cc somefunctions.h
	g++ -Wall -std=c++17 -c $<

clean :
	rm *.o sept9

