#include <stdio.h>

int count = 0;

// Functional initialization
int count_before_zero(int *arr, int size);


int main(void)
{
    int size;
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = count_before_zero(arr, size);

    printf("%d ", result);


    return 0;
}

int count_before_zero(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }

        count++;
    }

    return count;
}