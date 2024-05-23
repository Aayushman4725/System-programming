#include <stdio.h>
#include <string.h>

struct Customer
{
    char fname[50];
    char lname[50];
    int accNum;
    float accBalance;
};

int main()
{
    struct Customer cust[5];
    int custNum = 0;

    while (1)
    {
        printf("Enter first name:");

        scanf("%s", &cust[custNum].fname);
        if (strcmp(cust[custNum].fname, "stop") == 0)
        {
            break;
        }
        printf("\nEnter last name:");
        scanf("%s", cust[custNum].lname);
        printf("\nEnter account number:");
        scanf("%d", cust[custNum].accNum);
        printf("\nEnter account balance:");
        scanf("%d", cust[custNum].accBalance);
        custNum++;
        if (custNum >= 5)
        {
            printf("Max customer reached");
            break;
        }
    }

    FILE *f = fopen("customer.txt", "w");
    if (f == NULL)
    {
        printf("File not found");
    }

    else
    {
        printf("File created");
    }
}