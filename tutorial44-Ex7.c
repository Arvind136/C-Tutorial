#include <stdio.h>
#include <string.h>
int main()
{
    char naam1[50], raasta1[50], naam2[30], raasta2[50], naam3[30], raasta3[50];
    int lic_num1, drive1, lic_num2, drive2, lic_num3, drive3;
    struct driver
    {
        char name[50];
        int license_no;
        char route[50];
        int kms;
    } driver1, driver2, driver3;

    // for (int i = 1; i < 4; i++)
    // {
    //     //will take driver information
    //     printf("Please enter Driver-%d details:-",i);
    //     printf("\nEnter your name: ");
    //     scanf("%s", &naam1);
    //     printf("\nEnter your license number: ");
    //     scanf("%d", &lic_num1);
    //     printf("\nEnter your route: ");
    //     scanf("%s", &raasta1);
    //     printf("\nEnter the Kms you driven: ");
    //     scanf("%d", &drive1);
    //     //assigning the value
    //     strcpy(driver1.name, naam1);
    //     driver1.license_no = lic_num1;
    //     strcpy(driver1.route, raasta1);
    //     driver1.kms = drive1;
    // }

    //will take driver1 information
    printf("Please enter Driver-1 details:-");
    printf("\nEnter your name: ");
    scanf("%s", &naam1);
    printf("\nEnter your license number: ");
    scanf("%d", &lic_num1);
    printf("\nEnter your route: ");
    scanf("%s", &raasta1);
    printf("\nEnter the Kms you driven: ");
    scanf("%d", &drive1);
    //assigning the value
    strcpy(driver1.name, naam1);
    driver1.license_no = lic_num1;
    strcpy(driver1.route, raasta1);
    driver1.kms = drive1;

    //will take driver2 information
    printf("\nPlease enter Driver-2 details:-");
    printf("\nEnter your name: ");
    scanf("%s", &naam2);
    printf("\nEnter your license number: ");
    scanf("%d", &lic_num2);
    printf("\nEnter your route: ");
    scanf("%s", &raasta2);
    printf("\nEnter the Kms you driven: ");
    scanf("%d", &drive2);
    //assigning the value
    strcpy(driver2.name, naam2);
    driver2.license_no = lic_num2;
    strcpy(driver2.route, raasta2);
    driver2.kms = drive2;

    //will take driver3 information
    printf("\nPlease enter Driver-3 details:-");
    printf("\nEnter your name: ");
    scanf("%s", &naam3);
    printf("\nEnter your license number: ");
    scanf("%d", &lic_num3);
    printf("\nEnter your route: ");
    scanf("%s", &raasta2);
    printf("\nEnter the Kms you driven: ");
    scanf("%d", &drive3);
    //assigning the value
    strcpy(driver3.name, naam3);
    driver3.license_no = lic_num3;
    strcpy(driver3.route, raasta3);
    driver3.kms = drive3;

    //will print driver-1 details
    printf("\nDriver-1 details:-");
    printf("\n Name : %s\n", driver1.name);
    printf(" License no : %d\n", driver1.license_no);
    printf(" Route : %s\n", driver1.route);
    printf(" Driven : %d kms\n", driver1.kms);

    //will print driver-2 details
    printf("\nDriver-2 details:-");
    printf("\n Name : %s\n", driver2.name);
    printf(" License no : %d\n", driver2.license_no);
    printf(" Route : %s\n", driver2.route);
    printf(" Driven : %d kms\n", driver2.kms);

    //will print driver-3 details
    printf("\nDriver-3 details:-");
    printf("\n Name : %s\n", driver3.name);
    printf(" License no : %d\n", driver3.license_no);
    printf(" Route : %s\n", driver3.route);
    printf(" Driven : %d kms\n", driver3.kms);

    return 0;
}