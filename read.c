#include <stdio.h>

int main()
{
    int num[10];
    FILE *f = fopen("num.txt", "r");

    if (f == NULL)
    {
        printf("File not found");
    }

    else
    {
        printf("File opened\n");
    }

    for (int i = 0; i < 10; i++)
    {
        fscanf(f, "%d", &num[i]);
    }

    for (int i = 0; i < 10; i++)
    {

        printf("%d\n", num[i]);
    }

    fclose(f);
}