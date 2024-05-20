lib: solution.c solution.h
	gcc -shared solution.c -fPIC -o libsolution.so

test: main.c solution.h solution.h
	gcc -shared solution.c -fPIC -o libsolution.so
	gcc main.c -fPIC -L. -lsolution -o solution

clean:
	-rm solution
	-rm *.o
	-rm libsolution.so 2>/dev/null