#include<stdio.h>

struct Employee
{
    int empNo, age;
    char empName[20], address[100];
};

int main()
{
    struct Employee emp[5];
    int i;

    printf("\nEnter Details of Employees...\n");
    for(i=0; i<5; i++)
    {
        printf("\nEmployee - %d",i+1);
        printf("\n______________\n");
        printf("*No: ");
        scanf("%d",&emp[i].empNo);
        printf("*Name: ");
        scanf("%s",&emp[i].empName);
        printf("*Age: ");
        scanf("%d",&emp[i].age);
        printf("*Address: ");
        scanf("%s",&emp[i].address);
    }
    printf("\nEmployee Details...");
    for(i=0; i<5; i++)
    {
        printf("\n\nEmployee - %d",i+1);
        printf("\n______________\n");
        printf("*No: %d",emp[i].empNo);
        printf("\n*Name: %s",emp[i].empName);
        printf("\n*Age: %d",emp[i].age);
        printf("\n*Address: %s",emp[i].address);
    }
    
    return 0;
}