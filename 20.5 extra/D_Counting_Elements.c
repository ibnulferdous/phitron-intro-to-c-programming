#include <stdio.h>

int main(void)
{
    int n, count = 0;
    scanf("%d", &n);

    int arr[n];

    // Coping array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sorting the array from small to big
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Sorting the array from small to big
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + 1 == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("%d ", count);

    return 0;
}