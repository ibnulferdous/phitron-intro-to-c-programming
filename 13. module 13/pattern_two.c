#include <stdio.h>

int main(void)
{
    int n, s = 0, k;
    scanf("%d", &n);
    k = (n * 2) - 1;

    for (int i = 1; i <= n; i++)
    {   
        for(int j = 0; j < s; j++)
        {
            printf(" ");
        }

        for (int a = k; a > 0; a--)
        {
            printf("*");
        }

        s++;
        k = k - 2;
        printf("\n");
    }


    return 0;
}