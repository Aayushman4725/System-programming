#include <stdio.h>
#include <math.h>
int main()
{
    FILE *file;

    file = fopen("natural.txt", "w+");

    if (file == NULL)
    {
        printf("File not found");
    }

    else
    {
        printf("File created");
    }

    for (int i = 1; i <= 20; i++)
    {
        fprintf(file, "%d\n", i);
    }

    fclose(file);

    fopen("./natural.txt", "r");

    if (file == NULL)
    {
        printf("File not found");
    }

    else
    {
        printf("File created");
    }

    for (int i = 1; i <= 20; i++)
    {
        fscanf(file, "%d", &i);
        int num = i * 2;

        printf("%d\n", num);
    }

    fclose(file);
    return 0;
}