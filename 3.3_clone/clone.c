#include <sched.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

#define STACK_SIZE 10000
//most architectures' stack grows from elder adresses to yongest
//in clone call wi point the end of the stack for that reason
char child_stack[STACK_SIZE + 1];


int child(void *params)
{
        int c = 0;
        while(true)
        {
                usleep(50000);
                printf("child's turn %d\n", c++);
        }
}

int main()
{
        int c = 0;
        int result = clone(child, child_stack + STACK_SIZE, 0,0);
        printf("clone result = %d\n", result);

        while(true)
        {
                usleep(50000);
                printf("parent's turn %d\n", c++);
        }
}
