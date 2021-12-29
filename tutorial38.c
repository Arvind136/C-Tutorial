#include<stdio.h>
int main()
{
    typedef int* pointer;
    // int* a, b;
    pointer a, b;
    int c = 3;
    int d = 5;
    a=&c;
    b=&d;
    printf("address of a is %d\n",a);
    printf("address of b is %d\n",b);


    typedef struct student 
    {
        int id;
        char name[50];
        int class;
        char section;
    }std;  

    typedef int integer;
    int e,f;
    integer x,y,z; 

    struct student arvind;
    arvind.id=1;
    printf("arvind id is %d\n",arvind.id);

    std akash;
    akash.id=2;
    printf("akash id is %d\n",akash.id);

    return 0;
}