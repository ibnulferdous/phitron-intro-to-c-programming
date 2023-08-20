#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m, n;

    scanf("%d", &m);

    for (int x = 1; x <= m; x++)
    {   
        scanf("%d", &n);

        int arr[n];

        int odd = 0, even = 0;

        for (int y = 0; y < n; y++)
        {
            scanf("%d", &arr[y]);
        }

        for (int y = 0; y < n; y++)
        {
            if (arr[y] % 2 == 0)
            {
                even++;
            } 
            else 
            {
                odd++;
            }
        }

        if(n % 2 != 0)
        {
            printf("-1\n");
        }
        else if (abs(odd - even) % 2 != 0)
        {
            printf("-1\n");
        } 
        else 
        {
            printf("%d\n", abs(odd - even) / 2);
        }
    }

    return 0;
}