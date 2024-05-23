#include <stdio.h>

struct employee
{
    char ename[20];
    int age;
    int salary;
};

int main()
{
    struct employee emp1;

    printf("Enter employee name:");
    scanf("%s", &emp1.ename);
    printf("\nEnter employee age:");
    scanf("%d", &emp1.age);
    printf("\nEnter employee salary:");
    scanf("%d", &emp1.salary);

    printf("Name:%s\nAge:%d\nSalary:%d\n", emp1.ename, emp1.age, emp1.salary);

    FILE *f = fopen("emp.txt", "w");
    fprintf(f, "Name:%s\nAge:%d\nSalary:%d\n", emp1.ename, emp1.age, emp1.salary);

    fclose(f);
    return 0;
}