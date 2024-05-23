#include <stdio.h>

int main()
{
    int num[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num[i]);
    }

    FILE *f = fopen("num.txt", "w");

    if (f == NULL)
    {
        printf("File not found");
    }

    else
    {
        printf("File created");
    }

    for (int i = 0; i < 10; i++)
    {
        fprintf(f, "%d\n", num[i]);
    }

    fclose(f);

    return 0;
}