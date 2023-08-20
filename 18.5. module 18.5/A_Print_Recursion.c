#include <stdio.h>

void print_text(int n, int i);

int main(void)
{
    int n;
    scanf("%d", &n);

    print_text(n, 1);

    return 0;
}

void print_text(int n, int i)
{   
    if (n < i) return;

    printf("I love Recursion\n");
    print_text(n, i + 1);
}