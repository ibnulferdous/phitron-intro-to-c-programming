#include <stdio.h>
#include <string.h>


int main(void)
{
    char a[1001], b[1001];

    scanf("%s", a);
    scanf("%s", b);

    int a_len = strlen(a);
    int b_len = strlen(b);

    printf("%i %i\n", a_len, b_len);
    printf("%s %s\n", a, b);


    return 0;
}