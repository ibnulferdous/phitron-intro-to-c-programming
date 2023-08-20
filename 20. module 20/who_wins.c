#include <stdio.h>

int main(void)
{
    int n, a, b, tiger = 0, pathan = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &a, &b);

        if (a > b)
        {
            tiger++;
        }
        else if (a < b)
        {
            pathan++;
        }
    }

    if (tiger > pathan)
    {
        printf("Tiger");
    }
    else if (tiger < pathan)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }


    return 0;
}