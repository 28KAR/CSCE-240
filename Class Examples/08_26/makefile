# comment in a makefile
# $@ = the target
# $< = the first prerequisite
# $^ = all prerequisites

# Apple users, update the line below (e.g. change from g++ to g++-15)
compiler = g++
flags = -Wall -std=c++17
compile = $(compiler) $(flags) -c
link = $(compiler) $(flags)

aug26 : aug26.o
	$(link) $^ -o $@
	./$@

aug26.o : aug26.cc
	$(compile) $<

clean : 
	rm *.o aug26

