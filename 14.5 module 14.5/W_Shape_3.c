#include <stdio.h>

int main(void)
{   
    int n;
    scanf("%d", &n);

    int lines = n * 2;
    int spaces = n - 1;
    int stars = 1;

    for (int i = 1; i <= lines; i++)
    {   
        // Printing spaces
        for (int x = 1; x <= spaces; x++)
        {
            printf(" ");
        }

        // Printing stars
        for (int y = 1; y <= stars; y++)
        {
            printf("*");
        }

        printf("\n");

        if (n > i) 
        {
            spaces--;
            stars += 2;
        } 
        else if (n < i)
        {
            spaces++;
            stars -= 2;
        }

        
    }


    return 0;
}