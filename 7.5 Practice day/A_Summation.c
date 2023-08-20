#include <stdio.h>

int main()
{   
    int n;

    // Scan for the array length
    scanf("%d", &n);

    int arr[n];
    long long int sum = 0;

    // Loop for scaning array values and add them to sum variable
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // If sum is negative, multiply with -1
    if (sum < 0)
    {
        sum *= -1;
    }

    printf("%lld\n", sum);


    return 0;
}