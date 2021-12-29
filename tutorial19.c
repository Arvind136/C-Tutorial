#include<stdio.h>

// With arguments and with return value
int sum(int a, int b)
{
    return a+b;
}

// With arguments and without return value
void stars(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*' );
    }
    
}

// Without arguments and with return value
int takenumber()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("You have entered %d",a);
    return 0;
}

// Without arguments and without return value
void joke()
{
    printf("I am joking.");
}

int main()
{
   int c, d;
   c = sum(7,3);
   printf("%d",c);
   stars(10);
   printf("\n");
   joke();
   printf("\n");
//    d = takenumber();
//    printf("%d", d);
    takenumber();
    return 0;
}
