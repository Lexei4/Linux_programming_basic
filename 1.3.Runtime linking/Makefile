all: exe lib

exe: solution.c
        gcc solution.c -fPIC -ldl -Wl,-rpath,. -o solution

lib: libsolution.c
        gcc -shared libsolution.c -fPIC -o libsolution.so
clean:
        -rm solution
        -rm *.o
        -rm libsolution.so 2>/dev/null
