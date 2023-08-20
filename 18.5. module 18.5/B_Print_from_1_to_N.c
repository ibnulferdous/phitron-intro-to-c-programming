#include <stdio.h>

void print_num(int limit, int i);

int main(void)
{
    int n;
    scanf("%d", &n);

    print_num(n, 1);

    return 0;
}

void print_num(int limit, int i)
{   
    if (limit < i) return;
    printf("%d\n", i);
    print_num(limit, i + 1);
}