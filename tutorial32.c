#include<stdio.h>

int avg(int arr[]){
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("Avg is %d",sum/5);
    return 0;
}

int func1(int arr[2][5]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("The value at index %d, %d is %d\n",i,j,arr[i][j]);
        }
    }
    // arr[4]=65;
}

int main()
{
    int array[2][5] = {{2,4,53,25,542},
                   {3,4,556,45,34}};
    // avg(array);
    func1(array);
    // printf("The changed value at index 4 is %d",array[4]);
    return 0;
}