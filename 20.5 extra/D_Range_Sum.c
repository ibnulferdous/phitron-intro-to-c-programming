#include <stdio.h>

int main(void)
{
    int n;
    long long int l, r;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {   
        long long int total = 0;

        scanf("%lld %lld", &l, &r);

        long long int sum_of_l = (l * (l + 1)) / 2;
        long long int sum_of_r = (r * (r + 1)) / 2;

        if (sum_of_l < sum_of_r)
        {
            total = sum_of_r - sum_of_l + l;
        }
        else 
        {
            total = sum_of_l - sum_of_r + r;
        }

        printf("%lld\n", total);
    }

    return 0;
}