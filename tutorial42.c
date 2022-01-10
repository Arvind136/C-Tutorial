#include<stdio.h>

int func1(int a)
{
     static int b = 56;
    printf("The value of b is %d\n",b);
    b++;
    // printf("The increment value of b is %d\n",b);
    // printf("The address of a in func1 is %d\n",&a);
    return a*10;
}

int main()
{
    int a = 34;
    int value;
    value = func1(a);
    printf("value = %d\n",value);
    // printf("The address of a is %d\n",&a);
    value = func1(a);
    value = func1(a);
    value = func1(a);
    value = func1(a);

    return 0;
}