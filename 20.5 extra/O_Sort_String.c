#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d\n", &n);

    int arr['z' + 1] = {0}; 

    for (int i = 0; i < n; i++)
    {   
        char c;
        scanf("%c", &c);
        arr[c]++;
    }

    for (int i = 'a'; i <= 'z'; i++)
    {   
        if (arr[i] == 0) continue;
         
        for (int j = 1; j <= arr[i]; j++)
        {
            printf("%c", i);   
        }
    }

    return 0;
}