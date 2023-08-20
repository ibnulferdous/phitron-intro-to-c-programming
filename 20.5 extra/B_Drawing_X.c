#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int slash = 1;
    int backslash = n;


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            
            if ((n + 1) / 2 == i && (n + 1) / 2 == j) 
            {
                printf("X");
            }
            else if (slash == j)
            {
                printf("\\");
            }
            else if (backslash == j)
            {
                printf("/");
            }
            else {
                printf("*");
            }
        }
        printf("\n");

        slash++;
        backslash--;
    }


    return 0;
}