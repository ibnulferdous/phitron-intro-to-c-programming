#include <stdio.h>

int main(void)
{   
    char a[1000001];
    fgets(a, 1000001, stdin);

    for (int i = 0; a[i] != '\\'; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}