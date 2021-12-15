#include<stdio.h>
#define PI 3.14

int main()
{
   const int a = 8;
   float b = 3.54976644376;
//    PI = 3.15; cannot do this since PI is a constant
    // a = 90; cannot do this since a is a constant

//    printf("This is an %d integer and this is a %0.3f float.\n", a, b);
//    printf("This is an %d integer and this is a %10.3f float.\n", a, b);
   printf("This is an %d integer \a and \b this \t is a %-10.3f float.\\n \n", a, b);

   printf("PI-%f", PI);
    return 0;
}