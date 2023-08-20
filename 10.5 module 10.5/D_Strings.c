#include <stdio.h>
#include <string.h>

int main(void)
{
    char s_one[11];
    char s_two[11];

    scanf("%s", s_one);
    scanf("%s", s_two);

    int s_one_len = strlen(s_one);
    int s_two_len = strlen(s_two);

    printf("%d %d\n", s_one_len, s_two_len);
    printf("%s%s\n", s_one, s_two);

    char temp = s_one[0];
    s_one[0] = s_two[0];
    s_two[0] = temp;

    printf("%s %s", s_one, s_two);

    return 0;
}