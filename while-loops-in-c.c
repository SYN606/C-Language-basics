#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }

    // basic while loop
    // the block keeps executing as log as the condition is true.

    // note => if the condition never gets false this will become an infinite loop.

    return 0;
}