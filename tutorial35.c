#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Arvind";
    char s2[]="Kumar";
    char s3[54];
    printf("the strcmp for s1 and s2 returned %d",strcmp(s1,s2));
    // puts(strcat(s1,s2));
    // printf("The length of s2 is %d\n", strlen(s2));
    // printf("The reverse of s2 is %s\n", strrev(s2));
    // strcpy(s3,strcat(s1,s2));
    // puts(s3);
    return 0;
}