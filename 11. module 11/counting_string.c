#include <stdio.h>
#include <string.h>

int main (void)
{
    char s[101];
    scanf("%s", s);

    int count[26] = {0};

    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        int value = s[i] - 'a';
        count[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c: %d\n", (i + 'a'), count[i]);
        }
    }

    return 0;
}