#include <stdio.h>


int main(void)
{
    int n, m;

    scanf("%d %d", &n, &m);

    int arr[n];
    int count[m];

    for (int i = 0; i < n; i++)
    {   
        scanf("%d", &arr[i]);
    }

    // Removing garbeg values from the count array
    for (int i = 0; i <= m; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {   
        int val = arr[i];
        count[val]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}