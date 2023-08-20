#include <stdio.h>

int main()
{   
    int n, num;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        do
        {
            int digit = num % 10;
            printf("%d ", digit);
            num /= 10;
        } 
        while (num > 0);

        printf("\n");
    }


    return 0;
}