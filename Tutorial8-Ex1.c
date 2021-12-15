#include<stdio.h>

int main(int argc, char const *argv[])
{
    // Print multipliacation table of a number entered by the user in pretty form.

    int number, value, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Table of %d.\n",number);

    for( i=1; i<=10; i++)
    {
        value=i*number;
      printf("%d ",i);
      printf("X ");
      printf("%d ",number);
      printf("= ");
      printf("%d\n",value);
    
    }


    return 0;
}
