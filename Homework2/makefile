compiler = g++
flags = -Wall -std=c++17

program2 : program2.o program2functions.o
	$(compiler) $(flags) $^ -o $@
	./$@

program2.o : program2.cc program2functions.h
	$(compiler) $(flags) -c $<

program2functions.o : program2functions.cc program2functions.h
	$(compiler) $(flags) -c $<

clean :
	rm program2 *.o
