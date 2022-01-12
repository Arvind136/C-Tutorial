#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a = 23;
    int *ptr = NULL;
    ptr = &a;
    if (ptr != NULL)
    {
        printf("the address of a is %d\n", ptr);
        printf("the value of a is %d\n", *ptr);
    }
    else
    {
        printf("You cannot dereference because the ptr is null pointer.");
    }

    return 0;
}