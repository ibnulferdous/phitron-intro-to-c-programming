#include <stdio.h>

int main (void)
{   
    int n, pos;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);

    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = NULL;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != NULL) 
        {
            printf("%d ", arr[i]);
        }
    }




    return 0;
}