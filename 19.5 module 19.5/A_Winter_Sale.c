#include <stdio.h>

int main(void)
{
    int discount, discount_price;
    scanf("%d %d", &discount, &discount_price);

    float price = (100.00 * discount_price) / (100.00 - discount);

    printf("%.2f", price);

    return 0;
}