#include<stdio.h>

int main()
{
    int i = 1, num;
    printf("Enter a number to print table : ");
    scanf("%d", &num);
    for(i; i <= 10; i++){
    
        printf("%d x %d = %d\n", num, i, num * i);
        }
    return 0;
}