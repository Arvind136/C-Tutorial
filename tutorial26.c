#include<stdio.h>

int main()
{
    int a = 23;
    int* ptra = &a;
    int* ptrG  ;
    int* ptrN = NULL  ;

   printf("the value of a is %d\n",a);
   printf("the value of a by derefrence the pointer is %d\n",*ptra);
   printf("the address of a is %d\n",ptra);
   printf("the address of a in hexadecimal is %x\n",ptra);
   printf("the address of a is %d\n",&a);
   printf("the address of ptra is %d\n",&ptra);
   printf("the value of ptrG(garbage) is %d\n",ptrG);
   printf("the value of ptrN(NULL) is %d\n",ptrN);
    return 0;
}

