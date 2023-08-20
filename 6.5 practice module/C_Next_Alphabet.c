#include <stdio.h>

int main()
{   
    char c;
    scanf("%c", &c);

    if (c >= 'a' && c <= 'y')
    {
        char next_char = c + 1; 
        printf("%c\n", next_char);
    }
    else if(c == 'z')
    {
        char next_char = 'a'; 
        printf("%c\n", next_char);
    }


    return 0;
}