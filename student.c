#include <stdio.h>

int main()
{
    int roll, marks;
    char name[] = "Aayushman";
    char address[] = "Lalitpur";
    roll = 8;
    marks = 60;
    FILE *file;

    file = fopen("student.txt", "w");

    if (file == NULL)
    {
        printf("File not found\n");
    }

    else
    {
        printf("File successfully created\n");
    }

    fprintf(file, "name: %s\n address: %s \n roll:%d \n marks:%d", name, address, roll, marks);

    fclose(file);
    return 0;
}