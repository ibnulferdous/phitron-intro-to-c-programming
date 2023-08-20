#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[1001];
    int capital = 0, small = 0, spaces = 0;

    fgets(s, 1001, stdin);
    int s_length = strlen(s);

    for (int i = 0; i < s_length; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }
        else if (s[i] == ' ')
        {
            spaces++;
        }
    }

    printf("Capital - %i\n", capital);
    printf("Small - %i\n", small);
    printf("Spaces - %i\n", spaces);


    return 0;
}
