compiler = g++-15
flags = -Wall -std=c++17
compile = $(compiler) $(flags) -c
link = $(compiler) $(flags)

oct7 : oct7.cc temperature.o
	$(link) $^

temperature.o : temperature.cc temperature.h
	$(compile) $<

clean :
	rm a.out *.o

