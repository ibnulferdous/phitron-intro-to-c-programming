#include <stdio.h>

int main(void)
{
    int n, k;
    long long int total = 0;
    scanf("%d %d", &n, &k);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sort the array from big to small
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {   
        total += arr[i];
    }

    printf("%lld ", total);

    return 0;
}
