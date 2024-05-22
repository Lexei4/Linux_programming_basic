#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>
#include <string.h>

int (*someSecretFunctionPrototype)(int number);

bool init_library(char *libraryName, char *functionName)
{
    void *handle = dlopen(libraryName, RTLD_LAZY);

    if (!handle) {
        fprintf(stdout, "%s\n", dlerror());
        exit(EXIT_FAILURE);
    }

   *(void **) (&someSecretFunctionPrototype) = dlsym(handle, functionName);


  if(!someSecretFunctionPrototype){
       dlclose(handle);
       return false;
  }

   return true;
}


int main(int argc, char *argv[])
{
    int i = 0;

    char *libraryName = argv[1];
    char *functionName = argv[2];
    int argument = atoi(argv[3]);


    if(init_library(libraryName, functionName))
        printf("%d\n", someSecretFunctionPrototype(argument));
    else
        printf("ERROR: functionCalli\n");

   return 0;
}
