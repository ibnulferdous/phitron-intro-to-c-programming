#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[200], b[100];

    scanf("%s %s", a, b);

    int a_length = strlen(a);
    int b_length = strlen(b);

    for (int i = 0; i <= b_length; i++)
    {
        a[a_length] = b[i];
        a_length++;
    }

    printf("%s %s", a, b);

    return 0;
}