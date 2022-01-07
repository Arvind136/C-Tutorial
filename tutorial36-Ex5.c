#include<stdio.h>

int printstr(int str[]){
    for (int i = 0; i < 11; i++)
    {
        printf("%d",str[i]);
    }
    printf("\n");
}
int revstr(int str[]){
    for (int i = 10; i >= 0; i--)
    {
        printf("%d",str[i]);
    }
    
}

int main()
{
    int s1[]={0,1,2,3,4,5,6,7,8,9,10};
    printstr(s1);
    revstr(s1);
    return 0;
}