#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]);

int main(void)
{
    char s[11];
    scanf("%s", s);

    int result = is_palindrome(s);

    if (result == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}

int is_palindrome(char s[])
{   
    int start = 0;
    int end = strlen(s) - 1;
    int flag = 1;

    while(start < end) 
    {
        if(s[start] != s[end])
        {
            flag = 0;
            break;
        }

        start++;
        end--;
    }

    return flag;
}