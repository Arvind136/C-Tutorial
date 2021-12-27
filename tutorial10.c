#include<stdio.h>

int main()
{
    int age;
   printf("Enter your age: ");
   scanf("%d", &age);
   printf("Your age is %d.\n", age);

    if(age>=18){
        printf("You can Vote!");
    }
    else if (age>=10)
    {
        printf("You can vote for Teenager!");
    }
    else if(age>=3){
        printf("You can vote for Kids!");
    }
    else{
        printf("You cannot Vote!");
    }

    return 0;
}