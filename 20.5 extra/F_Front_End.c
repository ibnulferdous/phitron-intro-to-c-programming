#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[n];

    int start = 0;
    int end = n - 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    while (start <= end)
    {   
        if(start == end)
        {
            printf("%d ", arr[start]);
            arr[start] = '\0';
            break;
        }

        printf("%d ", arr[start]);
        arr[start] = '\0';

        printf("%d ", arr[end]);
        arr[end] = '\0';

        start++;
        end--;
    }

    return 0;
}