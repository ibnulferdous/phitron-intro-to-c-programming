#include <stdio.h>

int main(void)
{   
    char s[100], t[100];

    scanf("%s %s", s, t);

    int i = 0;

    while (1)
    {
        if (s[i] == '\0' && t[i] == '\0')
        {
            printf("S and T are the same!\n");
            break;
        }
        else if (s[i] == '\0') 
        {
            printf("S is smaller!\n");
            break;
        }
        else if (t[i] == '\0')
        {
            printf("T is smaller!\n");
            break;
        }

        if (s[i] == t[i])
        {
            i++;
        }
        else if (s[i] > t[i])
        {
            printf("T is smaller\n");
            break;
        }
        else 
        {
            printf("S is smaller\n");
            break;
        }
    }



    return 0;
}