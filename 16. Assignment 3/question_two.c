#include <stdio.h>

int main(void)
{
    int n, spaces, digits;
    scanf("%d", &n);

    spaces = n - 1;
    digits = 1;

    for (int l = 1; l <= n; l++)
    {
        for (int s = 1; s <= spaces; s++)
        {
            printf(" ");
        }

        for (int d = 1; d <= digits; d++)
        {
            printf("%d", l);
        }

        spaces--;
        digits++;
        printf("\n");
    }

    return 0;
}