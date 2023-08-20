#include <stdio.h>

long long int sum_of_elements(int arr[], int i);

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long int total = sum_of_elements(arr, n - 1);
    printf("%lld", total);

    return 0;
}

long long int sum_of_elements(int arr[], int i)
{   
    if (i < 0) return 0;

    long long int total = 0;
    total = arr[i] + sum_of_elements(arr, i - 1);

    return total;
}



