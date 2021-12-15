#include<stdio.h>

int main()
{
   int a, b; 

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter a number again:");
    scanf("%d", &b);

   switch (a)
   {
   case 4:
       printf("You entered 4.\n");
       switch (b)
       {
       case 5:
           printf("You entered 5 after 4.");
           break;
       
       default:
       printf("You had to enter 5 after 4.");
           break;
       }
       break;
   case 5:
       printf("You entered 5.\n");
       break;
   case 6:
       printf("You entered 6.\n");
       break;
   
   default:
       printf("This is default.");
       break;
   }
    return 0;
}
