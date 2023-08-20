#include <stdio.h>

int main(void)
{
    int n, space, star = 1;
    scanf("%d", &n);

    int lines = (2 * n) -1;
    space = n -1;

    for (int l = 1; l <= lines; l++)
    {
        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }

        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }

        if (l < n)
        {
            space--;
            star += 2;
        }
        else 
        {
            space++;
            star -= 2;
        }

        printf("\n");
    }




    return 0;
}