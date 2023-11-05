#include <stdio.h>

int main()
{
    float discount, payable_amount, amount;

    printf("Enter the purchase amount : ");
    scanf("%f", &amount);

    if (amount < 500)
    {
        printf("Your purchase amount is less than 500. You got no discount.");
    }
    else if (amount >= 500 && amount <= 1000)
    {
        discount = (amount * 5) / 100;
        payable_amount = amount - discount;
        printf("Total payable amount is %f.", payable_amount);
    }
    else
    {
        discount = (amount * 10) / 100;
        payable_amount = amount - discount;
        printf("Total payable amount is %f.", payable_amount);
    }
    return 0;
}