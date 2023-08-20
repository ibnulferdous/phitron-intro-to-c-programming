#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }

    // Print last row
    for (int c = 0; c < col; c++)
    {
        printf("%d ", arr[row - 1][c]);
    }

    printf("\n");

    // Print last column
    for (int r = 0; r < row; r++)
    {
        printf("%d ", arr[r][col - 1]);
    }

    return 0;
}
