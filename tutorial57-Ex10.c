#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int r1,c1,r2,c2,p1,p2;
    //First Matrix
    printf("Enter the no. of rows & columns of 1st Matrix ");
    printf("\nRows = ");
    scanf("%d",&r1);
    printf("Columns = ");
    scanf("%d",&c1);
    p1 = r1*c1;
    int *ptr1=(int *)malloc(p1*sizeof(int));
    printf("Enter the Elements value of %d*%d Matrix",r1,c1);
    int g=0;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("\n%d%d = ",i+1,j+1);
            scanf("%d",&ptr1[g]);
            g++;
        }   
    }
    // printf("\n1st ptr1[0] %d",ptr1[0]);
    // printf("\n1st ptr1[1] %d",ptr1[1]);
    // printf("\n1st ptr1[2] %d",ptr1[2]);
    // printf("\n1st ptr1[3] %d",ptr1[3]);
    // printf("\n1st ptr1[4] %d",ptr1[4]);
    // printf("\n1st ptr1[5] %d",ptr1[5]);
    
    //Second Matrix
    printf("\nEnter the no. of rows & columns of 2nd Matrix ");
    printf("\nRows = ");
    scanf("%d",&r2);
    printf("Columns = ");
    scanf("%d",&c2);
    p2 = r2*c2;
    int *ptr2=(int *)malloc(p2*sizeof(int));
    printf("Enter the Elements value of %d*%d Matrix",r2,c2);
    int g1=0;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("\n%d%d = ",i+1,j+1);
            scanf("%d",&ptr2[g1]);
            g1++;
        }
    }

    //MULTIPLICATION
    if (c1==r2)
    {
        printf("Multiplication of 1st & 2nd Matrix will give %d*%d Matrix",r1,c2);
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int s=ptr1[i+1*i]*ptr2[j]+ptr1[(i+1*i)+1]*ptr2[j+c2];
                printf("\n%d%d = %d",i+1,j+1,s);
                
            }
        }  
    }
    else
    {
        printf("\nThe given two matrices cannot be multiplied because the column of 1st matrix and row of 2nd matrix is not equal");
    }
    
    
    
    return 0;
}