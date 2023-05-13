#include <stdio.h>
int main()
{
    int skip = 5;
    int i = 0;

    while (i < 10)
    {
        i++;
        if (i != skip)
        {
            continue;
        }
        else
        {
            printf("The value of i is %d\n", i);
        }
    }
    // the continue statement is used to pass one statement as per need as when the value of i becomes 5 that will be printed, other values will be ignored because of continue statement.
    return 0;
}