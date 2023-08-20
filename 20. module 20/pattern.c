#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int line;
    scanf("%d", &line);

    int spaces = line - 1;
    int symbol = 1;

    for (int l = 1; l <= line; l++)
    {   
        // loop to print spaces in each line
        for (int spc = 1; spc <= spaces; spc++)
        {
            printf(" ");
        }

        // loop to print symbols in each line
        for (int smbl = 1; smbl <= symbol; smbl++)
        {
            if (l % 2 != 0)
            {
                printf("^");
            }
            else 
            {
                printf("*");
            }
        }

        // Line break after printing each line
        printf("\n");

        spaces--; 
        symbol += 2;
    }




    return 0;
}
