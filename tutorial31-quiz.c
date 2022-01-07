#include<stdio.h>

int addSub(int *x, int *y){
     *x = *x + *y;
     *y =  *x - *y - *y;
     return 0;
}

int main()
{
    int a = 10, b=7;
    printf("The value of a and b is %d and %d\n",a,b);
    addSub(&a,&b);
    printf("Sum of a+b is %d and Substraction of a-b is %d",a,b);
    return 0;
}