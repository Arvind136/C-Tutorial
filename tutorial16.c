#include<stdio.h>

int main()
{
   int i, age;
   for ( i = 1; i < 10; i++)
   {
       printf("This is your %d chance \n", i);
       printf("Enter a number: ");
       scanf("%d", &age);
       if (age == 4)
       {
           printf("You have entered 4 that's why program stoped.");
           break;
       }
       
       if(age==6)
       {
           printf("You have entered 6 that's why it will not go further and won't print anything.\n");
           printf("Continue statement worked.\n");
           continue;
       }
       printf("Continue statement doesn't work\n");
   }
   
    return 0;
}
