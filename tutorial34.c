#include<stdio.h>

void printstr(char str[]){
    for (int i = 0; str[i]!='\0' ; i++)
    {
        printf("%c",str[i]);
    }
    

}

int main()
{
    char s3[54];
    char s1[]={'A','r','v','i','n','d','\0'};
    char s2[]="Kumar Shah";
    gets(s3);
    printstr(s1);
    printf("\nUsing printf %s\n",s2);
    puts(s3);
    puts(s1);
    return 0;
}