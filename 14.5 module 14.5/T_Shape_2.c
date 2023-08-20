#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int spaces = n - 1;
    int stars = 1;

    for (int i = 1; i <= n; i++)
    {
        // Loop  to print spaces 
        for (int s = 1; s <= spaces; s++)
        {
            printf(" ");
        }

        // Loop  to print stars 
        for (int str = 1; str <= stars; str++)
        {
            printf("*");
        }

        printf("\n");

        spaces--;
        stars += 2;
    }

    return 0;
}