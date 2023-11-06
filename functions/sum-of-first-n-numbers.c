#include <stdio.h>

int sumSeries(int number);

int main()
{
    int number;
    printf("Enter the number  : ");
    scanf("%d", &number);

    printf("Sum if series is : %d", sumSeries(number));

    return 0;
}

int sumSeries(int number)
{
    int sum = 0;
    for (int i = 0; i <= number; i++)
    {
        sum = sum + i;
    }
    return sum;
}