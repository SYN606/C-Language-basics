#include <stdio.h>

int factorial(int number);

int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);

    printf("The factorial of %d is %d.", number, factorial(number));

    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int fact_n = factorial(n - 1);
    int final_fact = fact_n * n;
    return final_fact;
}