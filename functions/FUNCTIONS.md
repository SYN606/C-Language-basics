# Functions in Programming

A function is a block of code that performs a specific task. Functions provide modularity and reusability in your code by allowing you to divide your program into smaller, manageable pieces.

### Syntax

```c
return_type function_name(parameter1, parameter2, ...) {
    // function body
    // code to be executed
    return value; // optional return statement
}
```
# Function Components

1. **return_type:** It specifies the data type of the value that the function returns. It can be any valid C data type, such as `int`, `float`, `char`, `void` (if the function does not return any value), etc.

2. **function_name:** It is the name given to the function. Choose a meaningful name that describes the purpose of the function.

3. **parameters:** These are optional inputs that you can pass to the function. Parameters are enclosed within parentheses and separated by commas. Each parameter consists of a data type followed by its name.

4. **function body:** It is enclosed within curly braces `{}` and contains the actual code that gets executed when the function is called.

5. **return statement:** If the function has a `return_type` other than `void`, you can use the return statement to specify the value to be returned by the function. The return statement is optional if the function does not need to return any value.
