#include <stdio.h>

void calcSquare();
void calcPower();

int main()
{
    char choice;
    printf("Press 'S' for printing square of a number or press 'P' for printing the power of a number : ");
    scanf("%c", &choice);

    if (choice == 's' || choice == 'S')
    {
        calcSquare();
    }
    else if (choice == 'p' || choice == 'P')
    {
        calcPower();
    }
    else
    {
        printf("Something Went Wrong");
    }
    return 0;
}

void calcSquare()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    printf("The square of %d is %d", number, number * number);
}

void calcPower()
{
    int f_number, s_number;
    printf("Enter the first number (base number) : ");
    scanf("%d", &f_number);
    printf("Enter the second number (power value) : ");
    scanf("%d", &s_number);

    int sqr_val = 1;

    for (int i = 1; i <= s_number; i++)
    {
        sqr_val = f_number * sqr_val;
    }
    printf("%d power by %d is : %d", f_number, s_number, sqr_val);
}