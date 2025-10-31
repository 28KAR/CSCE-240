compiler = g++
flags = -Wall -std=c++17
compile = $(compiler) $(flags) -c
link = $(compiler) $(flags)

oct14 : oct14.cc temperature.o forecast.o
	$(link) $^

forecast.o : forecast.cc forecast.h temperature.h
	$(compile) $<

temperature.o : temperature.cc temperature.h
	$(compile) $<

clean :
	rm a.out *.o

