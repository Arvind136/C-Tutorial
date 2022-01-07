#include<stdio.h>

int main()
{
//     char a = 4;
//    printf("the value of a is %d\n",a);
//     a++;
//    printf("the value of a++ is %d\n",a);

//    char* ptra = &a;
//    printf("the address of a(ptra) is %d\n",ptra);
//     ptra++;
//    printf("the value of ptra++ is %d\n",ptra);

    int array[] = {3,5,46,63,4,4,62,3};
    int* ptrarray = array;
    printf("the address of array[0] is %d\n",ptrarray );
    printf("the address of array[1] is %d\n",ptrarray+1 );
    printf("the address of array[2] is %d\n",&array[2] );
    printf("the address of array[3] is %d\n",array + 3 );
    printf("the value of array[0] is %d\n",array[0] );
    printf("the value of array[1] is %d\n",array[1] );
    printf("the value of array[2] is %d\n",*(ptrarray + 2) );



    return 0;
}

