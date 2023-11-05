#include <stdio.h>

int main()
{
    int i = 1;
    for (i; i <= 10; i++)
    {

        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}