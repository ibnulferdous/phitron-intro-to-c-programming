#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);

    int ages[n];

    // Copying elements to the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ages[i]);
    }

    // sorting array in ascending order
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ages[i] > ages[j])
            {
                int temp = ages[i];
                ages[i] = ages[j];
                ages[j] = temp;
            }
        }
    }

    // finding the middle man
    if (n % 2 == 1) printf("%d", ages[((n + 1) / 2) - 1]);
    else printf("%d %d", ages[(n / 2) - 1], ages[(n / 2)]);

    return 0;
}
