#include <stdio.h>

int main()
{   
    int n;
    scanf("%d", &n);

    int arr[n];
    int search;
    int position = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &search);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            position = i;
            break;
        }
    }

    printf("%d\n", position);
 
    return 0;
}