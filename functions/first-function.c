// syntax of a function -->

// return_type function_name(parameter1, parameter2, ...) {
//      function body
//      code to be executed
//     return value;  optional return statement
// }

#include <stdio.h>

// declaration or prototype
void printHello();

int main() {
    printHello();
}

void printHello() {
    printf("This is a function");
}