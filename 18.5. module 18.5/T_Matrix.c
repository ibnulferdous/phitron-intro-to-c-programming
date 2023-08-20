#include <stdio.h>

int main(void)
{   
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int total = 0;
    int primary = 0;
    int secondary = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary += arr[i][j];
            }
            else if (i + j == n - 1)
            {
                secondary += arr[i][j];
            }
        }
        
    }

    total = primary - secondary;

    if (total < 0) 
    {
        total = total * (-1);
    }

    printf("%d\n", total);

    return 0;
}