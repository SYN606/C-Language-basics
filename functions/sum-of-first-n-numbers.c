#include <stdio.h>

int sumSeries(int number);

int sumRec(int number);

int main()
{
    int number;
    printf("Enter the number  : ");
    scanf("%d", &number);

    // printing normal method
    printf("Sum of series is : %d\n", sumSeries(number));

    // printing recursive method
    printf("Sum of series using recursive method is : %d", sumRec(number));

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

// recursive method

int sumRec(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sum_num = sumRec(n - 1); // sum of 1 to n
    int final_sum = sum_num + n;
    return final_sum;
}