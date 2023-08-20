#include <stdio.h>

int main(void)
{
    int n;
    long long int x, max = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        long long int count = 0;

        scanf("%lld", &x);

        while (x % 2 == 0)
        {   
            count++;
            x /= 2;
        }

        if (max < count)
        {
            max = count;
        }

    }

    printf("%lld", max);

    return 0;
}