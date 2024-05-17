#include "solution.h"

int main()
{
        int valueForPointer = 105;
        printf("Pointer value before solution is: %d\n", valueForPointer);
        printf("%d\n", stringStat("Hello", 5, &valueForPointer));
        printf("Pointer value after solution: %d\n", valueForPointer);
}
