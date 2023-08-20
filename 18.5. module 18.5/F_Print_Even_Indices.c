#include <stdio.h>

void print_even(int arr[], int i);

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_even(arr, n - 1);

    return 0;
}

void print_even(int arr[], int i)
{   
    if (i < 0) return;

    if (i % 2 == 0) printf("%d ", arr[i]);
    print_even(arr, i -1);
}