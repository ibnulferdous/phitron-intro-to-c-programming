#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100], t[100];
    scanf("%s %s", s, t);

    for (int i = 0; i <= strlen(t); i++)
    {
        s[i] = t[i];
    }

    printf("%s %s\n", s, t);


    return 0;
}