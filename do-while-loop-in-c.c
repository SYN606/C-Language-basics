#include <stdio.h>
int main()
{

    int i = 1;
    do
    {
        printf("The valure of is is %d\n", i);
        i++;
    } while (i <= 10);
    
    // this will form 1 to 10.
    // the do while loop runs the block of code inside the do atleast one time and then goes for the condition check.
    return 0;
}