#include <stdio.h>
#include <limits.h>

int main()
{   
    int n, a;
    scanf("%d", &n);

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);

        if (max < a)
        {
            max = a;
        }
    }

    printf("%d\n", max);

    return 0;
}