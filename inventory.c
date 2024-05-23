#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("Inventory.txt", "w");
    if (file == NULL)
    {
        printf("File not found");
    }

    else
    {
        printf("File created");
    }
    char a[] = "AAA";
    char b[] = "BBB";
    char c[] = "CCC";

    fprintf(file, "Product   Quantity   Rate\n");
    fprintf(file, "%3s%10d%12d\n", &a, 5, 100);
    fprintf(file, "%3s%10d%12d\n", &b, 3, 200);
    fprintf(file, "%3s%10d%12d", &c, 2, 50);

    fclose(file);
    return 0;
}