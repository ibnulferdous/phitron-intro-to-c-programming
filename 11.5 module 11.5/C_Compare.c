#include <stdio.h>


int main(void)
{
    char x[21], y[21];
    scanf("%s", x);
    scanf("%s", y);

    int i = 0;

    while(1)
    {
        if (x[i] == '\0')
        {
            printf("%s\n", x);
            break;
        }
        else if(y[i] == '\0')
        {
            printf("%s\n", y);
            break;      
        }

        if (x[i] == y[i])
        {
            i++;
        }
        else if(x[i] < y[i])
        {
            printf("%s\n", x);
            break;
        }
        else 
        {
            printf("%s\n", y);
            break;
        }
    }


    return 0;
}