#include <stdio.h>

int main()
{
    int type, type1, type2, type3, type4, type5;
    char yes;

    // while (1) //This will create  infinite loop.
    // {

        printf("\nWhat you want to convert.\n\nType \\:/ if you want to convert\nType 1:-> km to m\nType 2:-> m to foot\nType 3:-> foot to inches\nType 4:-> km to foot\nType 5:-> km to inches\n");
        printf("\n");
        printf("Type:");
        scanf("%d", &type);

        if (type == 1)
        {
            printf("Enter a number: ");
            scanf("%d", &type1);
            printf("Type 'yes' if you want to convert %dkm to meter!\n", type1);
            printf("Type: ");
            scanf("%i", &yes);
            if (yes == yes)
            {
                float answer1;
                answer1 = type1 * 1000;
                printf("%dkm = %fm", type1, answer1);
                // break;
            }
            else
            {
                printf("You have to eneter 'yes' in small letter, try again");
            }
        }
        else if (type == 2)
        {
            printf("Enter a number: ");
            scanf("%d", &type2);
            printf("Type 'yes' if you want to convert %dm to foot!\n", type2);
            printf("Type: ");
            scanf("%i", &yes);
            if (yes == yes)
            {
                float answer2;
                answer2 = (float)type2 * 3.28084;
                printf("%dm = %ffoot", type2, answer2);
            }
            else
            {
                printf("You have to eneter 'yes' in small letter, try again");
            }
        }
        else if (type == 3)
        {
            printf("Enter a number: ");
            scanf("%d", &type3);
            printf("Type 'yes' if you want to convert %dfoot to inches!\n", type3);
            printf("Type: ");
            scanf("%i", &yes);
            if (yes == yes)
            {
                float answer3;
                answer3 = (float)type3 * 12;
                printf("%dfoot = %finches", type3, answer3);
            }
            else
            {
                printf("You have to eneter 'yes' in small letter, try again");
            }
        }
        else if (type == 4)
        {
            printf("Enter a number: ");
            scanf("%d", &type4);
            printf("Type 'yes' if you want to convert %dkm to foot!\n", type4);
            printf("Type: ");
            scanf("%i", &yes);
            if (yes == yes)
            {
                float answer4;
                answer4 = (float)type4 * 3280.84;
                printf("%dkm = %ffoot", type4, answer4);
            }
            else
            {
                printf("You have to eneter 'yes' in small letter, try again");
            }
        }
        else if (type == 5)
        {
            printf("Enter a number: ");
            scanf("%d", &type5);
            printf("Type 'yes' if you want to convert %dkm to inches!\n", type5);
            printf("Type: ");
            scanf("%i", &yes);
            if (yes == yes)
            {
                float answer5;
                answer5 = (float)type5 * 3280.84;
                printf("%dkm = %finches", type5, answer5);
            }
            else
            {
                printf("You have to eneter 'yes' in small letter, try again");
            }
        }
    // }
    return 0;
}
