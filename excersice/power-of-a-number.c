#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("The power of %d is %d.", num, num * num);
    return 0;
}