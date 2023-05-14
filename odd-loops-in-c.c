// execution of a loop an unknown number of times

#include <stdio.h>
int main()
{
    char another;
    int num;

    do
    {
        printf("Enter a number : ");
        scanf("%d", &num);

        printf("The square of %d is %d\n", num, num * num);

        printf("Want to enter another number : y/n \t");
        fflush(stdin);
        scanf("%c", &another);
    } while (another == 'y');

    return 0;
}

// odd loop doesn't know how many times it has to be execute.