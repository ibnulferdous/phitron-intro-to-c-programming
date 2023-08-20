#include <stdio.h>

void print_num(int limit, int i);

int main(void)
{
    int n;
    scanf("%d", &n);

    print_num(n, n);

    return 0;
}

void print_num(int limit, int i)
{   
    if (i < 1) return;
    printf("%d", i);

    if(i > 1)
    {
        printf(" ");
    }

    print_num(limit, i - 1);
}