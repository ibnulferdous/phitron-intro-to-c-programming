#include <stdio.h>

// Function initialization
int years_to_days(int y);
int sum();
void greet(char name[]);
void multiplication_table(void);

int main(void)
{   
    // Variable declarations
    int y, days, sum_result;
    char name[101];

    // Years to days
    scanf("%d", &y);
    days = years_to_days(y);
    printf("%d years = %d days\n", y, days);

    // Sum of two numbers
    sum_result = sum();
    printf("Sum: %d\n", sum_result);
    

    // Function to see greetings
    scanf("%s", name);
    greet(name);

    // Function to print multiplication table
    multiplication_table();

    return 0;
}

// Has Return + Parameter
int years_to_days(int y)
{
    return y * 365;
}

// Has Return + No Parameter
int sum()
{
    int num_one, num_two;
    scanf("%d %d", &num_one, &num_two);

    return num_one + num_two;
}

// No return + Parameter
void greet(char name[])
{
    printf("Hello %s!\n", name);
}

// No Return + No Parameter
void multiplication_table(void)
{   
    int n;
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d= %d\n", i, n, (i * n));
    }
}
