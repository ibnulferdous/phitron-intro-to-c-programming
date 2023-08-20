#include <stdio.h>

void pass_by_value(int x);
void pass_by_reference(int *x);

int main(void)
{
    int x;
    scanf("%d", &x);

    printf("Main function memory address: %d\n", &x);

    pass_by_value(x);
    pass_by_reference(&x);


    return 0;
}

// Pass by value
void pass_by_value(int x)
{
    printf("Pass by value function memory address: %d\n", &x);
}

// Pass by reference
void pass_by_reference(int *x)
{
    printf("Pass by reference function memory address: %d\n", x);
}