#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    // number of lines to print
    int lines = (2 * n) - 1;
    int characters = n;
    int spaces = n - 1;
    int digits = 1;

    // Loop to pint lines
    for (int i = 1; i <= lines; i++)
    {   
        // Loop to print spaces
        for (int s = 1; s <= spaces; s++)
        {
            printf(" ");
        }

        for (int num = 1; num <= digits; num++)
        {
            printf("%d", num);
        }

        printf("\n");

        if (i < n)
        {
            spaces--;
            digits += 2;
        }
        else
        {
            spaces++;
            digits -= 2;
        }
    }


    return 0;
}