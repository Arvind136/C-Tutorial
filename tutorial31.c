#include<stdio.h>

int swap(int *x, int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("The swap value of a and b is %d and %d",*x,*y);
}

int main()
{
    int a=2, b=6;
    printf("The value of a and b is %d and %d\n",a,b);
    swap(&a,&b);
    return 0;
}