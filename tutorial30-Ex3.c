#include <stdio.h>

int a, b;

int func1(int r)
{
    for (int j = 0; j <= r; j++)
    {
        
        for (int i = 0; i <= j; i++)
        {

            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int star(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}
int reverseStar(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i ; j--)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}

int main()
{

    // int j = 5;
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    // star(num);
    // func1(5);
    reverseStar(num);

    return 0;
}