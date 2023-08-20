#include <stdio.h>
#include <string.h>

int main(void)
{

    char s[100001];
    scanf("%s", s);

    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' ';
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        else 
        {
            s[i] = s[i] - 32;
        }
    }

    printf("%s\n", s);

    return 0;
}