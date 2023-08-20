#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[n];

    // Loop for copying elements to the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Selection sort
    for (int x = 0; x < n - 1; x++)
    {
        for (int y = x + 1; y < n; y++)
        {
            if (arr[x] > arr[y])
            {
                int temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
            }
        }
        
    }

    // Loop for printing elements of the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}