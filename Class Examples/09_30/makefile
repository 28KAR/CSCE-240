compiler = g++
flags = -std=c++17 -Wall

sept30 : sept30.o arrayfunctions.o
	g++ -Wall -std=c++17 $^ -o $@

sept30.o : sept30.cc arrayfunctions.h
	g++ -Wall -std=c++17 -c $<

arrayfunctions.o : arrayfunctions.cc arrayfunctions.h
	g++ -Wall -std=c++17 -c $<

clean :
	rm *.o sept30

