#include <stdio.h>

int main(void)
{
    int size, group;
    scanf("%d %d", &size, &group);

    int arr[size];

    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {   
        // Resetting the minimum value according to the group size
        if (i % group == 0)
        {   
            min = arr[i];
        }

        // Comparing values
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (i % group == (group - 1))
        {
            printf("%d ", min);
        }
    }

    if (size % group != 0)
    {
        printf("%d ", min);
    }


    return 0;
}