#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, flag = 1;
    scanf("%d", &n);
    int arr[n][n];

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            scanf("%d", &arr[row][col]);
        }
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if(row == col)
            {
                if (arr[row][col] != 1)
                {
                    flag = 0;
                    break;
                }
            }
            else 
            {
                if (arr[row][col] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if (flag == 1) {
        printf("YES");  
    } 
    else 
    {
        printf("NO");
    }     



    return 0;
}
