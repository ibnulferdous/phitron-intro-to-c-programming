#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n, min, max, min_index, max_index;
    scanf("%d", &n);
    int arr[n];

    min = INT_MAX;
    max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {

        if (min > arr[i])
        {
            min = arr[i];
            min_index = i;
        }

        if (max < arr[i])
        {
            max = arr[i];
            max_index = i;
        }
    }

    arr[min_index] = max;
    arr[max_index] = min;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}