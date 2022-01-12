#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int a = 234;
    float b = 3.5;
    void *ptr;
    ptr = &a;
    printf("The address of a is %d\n",ptr);
    printf("The value of a is %d\n",*((int*)ptr));
    ptr = &b;
    printf("The address of b is %d\n",ptr);
    printf("The value of b is %f\n",*((float*)ptr));

    return 0;
}