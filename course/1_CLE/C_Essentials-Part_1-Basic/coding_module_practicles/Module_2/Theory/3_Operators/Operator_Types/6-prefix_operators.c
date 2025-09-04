/*

Prefix operators are unary operators that modify the value of a variable before it is used in an expression. They are applied directly to the variable and can be used to increment or decrement its value.
They are denoted by the `++` or `--` symbols placed before the variable name.
These operators modify the variable's value by 1, either increasing it (with `++`)
or decreasing it (with `--`), and they do so before the current value is evaluated in the expression.
For example, in the expression `++x`, the value of `x` is incremented by 1 before it is used in the expression. This means that if `x` is 5, the expression evaluates to 6, and `x` becomes 6.
Similarly, in the expression `--y`, if `y` is 10, the expression evaluates to 9, and `y` becomes 9.
Prefix operators are commonly used in loops and other control structures where the updated value of a variable is needed immediately in the expression. 

Let's get prefixing...

*/

// Prefix operator symbols:
// `++` for incrementing a variable by 1
// `--` for decrementing a variable by 1
// Example usage of prefix operators in C:


#include <stdio.h>
int main() {
    int x = 5;
    int y = 10;

    // Using prefix increment operator
    printf("Value of x before increment: %d\n", x); // Output: 5
    printf("Value of x after increment: %d\n", ++x); // Output: 6 (incremented value)
    printf("Value of x now: %d\n", x); // Output: 6

    // Using prefix decrement operator
    printf("Value of y before decrement: %d\n", y); // Output: 10
    printf("Value of y after decrement: %d\n", --y); // Output: 9 (decremented value)
    printf("Value of y now: %d\n", y); // Output: 9

    return 0;
}
// Output:
// Value of x before increment: 5
// Value of x after increment: 6
// Value of x now: 6
// Value of y before decrement: 10
// Value of y after decrement: 9
// Value of y now: 9

// Explanation:
// The code demonstrates the use of prefix increment (`++x`) and decrement (`--y`)
// operators in C. The value of `x` is incremented before it is used in the
// expression, and the value of `y` is decremented before it is used in the
// expression. The updated values are printed immediately after the operations. 


