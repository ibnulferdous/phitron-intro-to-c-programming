#include <stdio.h>

int string_length(char *s, int i);

int main(void)
{   
    char *s;
    scanf("%s", s);

    int length = string_length(s, 0);

    printf("Length of %s: %d\n", s, length);

    return 0;
}

int string_length(char *s, int i)
{   
    if (s[i] == '\0') return 0;
    int l = string_length(s, (i + 1));
    return l + 1;
}