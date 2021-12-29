#include<stdio.h>

int main()
{
    int marks[2][3]={{53,56,45}, 
                    {66, 75, 56}};
    // marks[0]=2;
    // marks[1]=5;
    // marks[2]=6;
    // printf("marks of the student %d",marks[1]);

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Enter the marks of corresponding students %d: \n",i+1);
    //     scanf("%d",&marks[i]);
        // printf("marks of student %d is %d.\n",i+1,marks[i]);
    // }

    printf("%d\n",marks[1][1]);

    for (int i = 0, j=0; i<2, j<3; i++,j++)
    {
        printf("marks of student %d is %d.\n",i,marks[i][j]);
    }
    
    return 0;
}