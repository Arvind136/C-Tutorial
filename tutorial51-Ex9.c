#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int random, userPoint, computerPoint, userValue;
char userName[20];

int grn(int n){
    srand(time(NULL));
    return rand()%n; 
}

// random = grn();
// int random = grn(3);

void computer(){
    int random = grn(3);
    if (userValue == 0)
    {
        if (random == 0)
        {
            printf("%s : Rock\n",userName);
            printf("Computer : Rock\n");
            printf("Result : Draw");
        }
        else if (random == 1)
        {
            printf("%s : Rock\n",userName);
            printf("Computer : Paper\n");
            printf("Result : Computer Won");
            computerPoint++;
        }else
        {
            printf("%s : Rock\n",userName);
            printf("Computer : Scissors\n");
            printf("Result : %s Won Congratulation:)",userName);
            userPoint++;
        }
    }
    if (userValue == 1)
    {
        if (random == 0)
        {
            printf("%s : Paper\n",userName);
            printf("Computer : Rock\n");
            printf("Result : %s Won Congratulation:)",userName);
            userPoint++;
        }
        else if (random == 1)
        {
            printf("%s : Paper\n",userName);
            printf("Computer : Paper\n");
            printf("Result : Draw");
        }else
        {
            printf("%s : Paper\n",userName);
            printf("Computer : Scissors\n");
            printf("Result : Computer Won");
            computerPoint++;
        }  
    }
    if (userValue == 2)
    {
        if (random == 0)
        {
            printf("%s : Scissors\n",userName);
            printf("Computer : Rock\n");
            printf("Result : Computer Won");
            computerPoint++;
        }
        else if (random == 1)
        {
            printf("%s : Scissors\n",userName);
            printf("Computer : Paper\n");
            printf("Result : %s Won Congratulation:)",userName);
            userPoint++;
        }else
        {
            printf("%s : Scissors\n",userName);
            printf("Computer : Scissors\n");
            printf("Result : Draw");
        }  
    }
    printf("\n%s Points : %d\nComputer Points : %d\n\n",userName, userPoint, computerPoint);
    
}


int main()
{
    // printf("The random no. b/w 0 to 100 is %d\n", rand()%100);
    // printf("The random no. b/w 0 to 10 is %d", grn(10));

    //GAME CODE START HERE
    int i = 1;
    printf("Enter your name : ");
    scanf("%s",&userName);
    printf("You will get 3 chance only.\n");
    while (i<=3)
    {
        printf("------- %d Chance -------\n",i);
        printf("Player 1: %s \n",userName,userPoint);
        printf("Player 2: Computer \n",computerPoint);
        printf("Please enter '0 for rock', '1 for paper' and '2 for scissors', Thank You:)\n");
        printf("%s's turn : ",userName);
        scanf("%d",&userValue);
        // printf("\n");
        computer();
        i++;
    }
    if (userPoint > computerPoint)
    {
        printf(" ------ %s Won ------ \n");
    }
    else
    {
        printf(" ------ Computer Won ------ \n");
        
    }
    
    
    
    return 0;
}