#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;
    // ptr = (int*) malloc(3*sizeof(int));
    ptr = (int*) calloc(4,sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d : ",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d \n",i, ptr[i]);
        
    }
    
    printf("Enter the size of new array : ");
    scanf("%d", &n);
    ptr = (int*)realloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d : ",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d is %d \n",i, ptr[i]);
        
    }

    free(ptr);
    printf("Previous value is freed now, you can enter a new value.\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d : ",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d is %d \n",i, ptr[i]);
        
    }
    
    return 0;
}