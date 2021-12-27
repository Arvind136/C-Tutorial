#include<stdio.h>

int main()
{
   int mathmarks, sciencemarks; 
   printf("Enter your Math score: ");
   scanf("%d", &mathmarks);

   printf("Enter your Science score: ");
   scanf("%d", &sciencemarks);

   printf("You got %d in Math and %d in Science out of 50.\n", mathmarks, sciencemarks);

    if(mathmarks >=45){
        if(sciencemarks >=45){
            printf("You will get an I-phone!");
        }
        else{
            printf("You will get a Headphone!");
        }
        
    }
    else if( mathmarks>=15){
        printf("You will get a Headphone!");
    }
    else if( sciencemarks>=15){
        printf("You will get a Headphone!");
    }
    else{
        printf("You Failed the exam ):");
    }
    
    return 0;
}
