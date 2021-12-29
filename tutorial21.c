#include<stdio.h>

int factorial(int num){
    if (num==0 || num==1)
    {
        return 1;   
    }
    else
    {
        return (num*factorial(num-1));
    }
    
    
}

int main()
{
    int value = factorial(11);
   printf("%d", value);
    return 0;
}
