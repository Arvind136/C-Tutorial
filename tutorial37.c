#include<stdio.h>
#include<string.h>
int main()
{
    struct student 
    {
        int id;
        char name[50];
        int class;
        char section;
    }arvind, akash, shyam;

    // struct student arvind, akash, shyam;
    arvind.id=1;
    akash.id=2;
    shyam.id=3;

    strcpy(arvind.name,"Arvind Kumar Shah");
    strcpy(akash.name , "Akash Yadav");
    strcpy(shyam.name , "Shyam Shaw");

    arvind.class=12;
    akash.class=12;
    shyam.class=12;

    arvind.section='A';
    akash.section='A';
    shyam.section='A';

    printf("arvind id is %d, full name is %s, class %d, section %c.\n", arvind.id, arvind.name, arvind.class, arvind.section);
    printf("akash id is %d, full name is %s, class %d, section %c.\n", akash.id, akash.name, akash.class, akash.section);
    printf("shyam id is %d, full name is %s, class %d, section %c.\n", shyam.id, shyam.name, shyam.class, shyam.section);

    return 0;
}