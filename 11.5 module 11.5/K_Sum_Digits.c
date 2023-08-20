#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, sum = 0;
    scanf("%d", &n);

    char s[n];
    scanf("%s", s);
    
    for (int i = 0; i < n; i++)
    {
        sum += (s[i] - '0');
    }

    printf("%d\n", sum);

    return 0;
}