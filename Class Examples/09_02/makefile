compiler = g++
flags = -Wall -std=c++17

sept2 : sept2.o myfunctions.o
	$(compiler) $(flags) $^ -o $@
	./$@

sept2.o : sept2.cc myfunctions.h
	$(compiler) $(flags) -c $<

myfunctions.o : myfunctions.cc myfunctions.h
	$(compiler) $(flags) -c $<

clean :
	rm sept2 *.o
