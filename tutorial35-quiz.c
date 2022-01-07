#include<stdio.h>
#include<string.h>
int main()
{
    char frnd1[50];
    char frnd2[50];
    printf("First name of friend:");
    gets(frnd1);
    printf("Second name of friend:");
    gets(frnd2);
    printf("\n%s and %s are friends.\n",frnd1,frnd2);
    puts(strcat(frnd1,frnd2));
    return 0;
}