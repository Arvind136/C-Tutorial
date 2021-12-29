#include<stdio.h>

int main()
{
//    label:
//    printf("Goto statement worked\n");
//    printf("Let's see Goto statement is working or not.\n");
//    goto label;

    label:
     printf("Goto statement worked.\n");

    int age;
    for (int i = 1; i < 10; i++)
    {
        printf("This is your %d chance.\n", i);
        printf("Enter a number: ");
        scanf("%d", &age);
        if(age == 7)
        {
            goto label;

        }
        else
        {
            printf("Goto statment didn't work.\n");
        }
        
    }
    


    return 0;
}
