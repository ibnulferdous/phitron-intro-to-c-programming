#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t, s, a, b, c, d;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %d %d", &s, &a, &b, &c);
        d = s - (a + b + c);
        printf("%d\n", d);
    }

    return 0;
}
