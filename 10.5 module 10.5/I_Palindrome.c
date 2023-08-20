#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1001];
    scanf("%s", s);

    int length = strlen(s);

    int start = 0;
    int end = length -1;
    int is_palindrome = 1;

    while (start < end)
    {
        if(s[start] != s[end])
        {
            printf("NO\n");
            is_palindrome = 0;
            break;
        }

        start++;
        end--;
    }

    if (is_palindrome == 1)
    {
        printf("YES\n");
    }

    return 0;
}