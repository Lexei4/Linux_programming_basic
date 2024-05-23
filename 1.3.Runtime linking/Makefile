all: exe 

exe: solution.c
	gcc solution.c -fPIC -ldl '-Wl,-rpath=.' -o solution

clean:
	-rm solution
	-rm *.o
	-rm libsolution.so 2>/dev/null
