#include <stdio.h>
#include <string.h>

int main(void)
{
    char c;
    int count[26] = {0};
    
    while (scanf("%c", &c) != EOF)
    {
        int value = c - 97;
        count[value]++;
    }


    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0) 
        {
            printf("%c : %d\n", i + 97, count[i]);
        }
    }


    return 0;
}