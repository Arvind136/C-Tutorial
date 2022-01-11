#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int num, i = 1;
    char *ptr;
    ptr = (char *)malloc((num + 1) * sizeof(char));

    while (i <= 3)
    {
        printf("For %d Emplyee\nEnter the charecter in your id number: ", i);
        scanf("%d", &num);
        printf("Enter your company id: ");
        scanf("%s", ptr);
        printf("%d employee id is %s.\n", i, ptr);
        free(ptr);
        i=i+1;
    }

    //for 1st employee
    // printf("For first Emplyee\nEnter the charecter in your id number: ");
    // scanf("%d", &num);
    // printf("Enter your company id: ");
    // scanf("%s", ptr);
    // printf("1st employee id is %s.\n", ptr);

    // free(ptr);

    //for 2nd employee
    // printf("For second Emplyee\nEnter the charecter in your id number: ");
    // scanf("%d",&num);
    // printf("Enter your company id: ");
    // scanf("%s", ptr);
    // printf("2nd employee id is %s.\n", ptr);

    // free(ptr);

    //for 3rd employee
    // printf("For third Emplyee\nEnter the charecter in your id number: ");
    // scanf("%d",&num);
    // printf("Enter your company id: ");
    // scanf("%s", ptr);
    // printf("3rd employee id is %s.\n", ptr);

    return 0;
}