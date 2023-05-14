// goto is called as jump statement used to transfer program control to a predefined label.

#include <stdio.h>
int main()
{
    //     goto label;
    //     block of code
    //     label: statement;

    //  --------> basic goto code
    // label:
    //     printf("This is block of label code\n");
    //     printf("Hello world");
    //     goto label;

    // this will be a infinite loop because everytime the label statement will be recalled.

    // -------> breaking this infinite loop with another goto statement

    // label:
    //     printf("This is block of label code\n");
    //     goto end;
    //     printf("Hello world");
    //     goto label;

    // end:
    //     printf("this is the end line\n");

    // writing a meaning full program


    int num;
    for (int i = 0; i <= 10; i++)
    {
        printf("%d", i);

        for (int j = 0; i <= 10; j++)
        {
            printf("Enter a number to end this program : ");
            scanf("%d", &num);

            if (num == 0)
            {
                goto end;
            }
            
        }
        
    }
        end:
            printf("The program has been ended");

    return 0;
}