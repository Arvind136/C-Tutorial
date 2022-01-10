#include<stdio.h>
#include<string.h>
int main()
{
    // typedef struct student {
    //     int id;
    //     char name[34];
    //     int class;
    // } std;

    typedef union student {
        int id;
        char name[34];
        int class;
    } std;

    std arvind, raj;
    arvind.id =1;
    arvind.class =12;
    strcpy(arvind.name, "Arvind Kumar Shah");
    raj.id =2;
    raj.class =12;
    strcpy(raj.name, "Raj Rajak");
    printf("arvind id is %d, full name is %s and class is %d.\n",arvind.id, arvind.name, arvind.class);
    printf("raj id is %d, full name is %s and class is %d.\n",raj.id, raj.name, raj.class);


    return 0;
}