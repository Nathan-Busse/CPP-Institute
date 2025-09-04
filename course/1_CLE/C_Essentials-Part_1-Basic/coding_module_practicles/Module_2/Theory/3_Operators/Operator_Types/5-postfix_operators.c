/*

Postfix operators are used to increment or decrement a variable after its value has been used in an expression.

They are denoted by the `++` or `--` symbols placed after the variable name.

These operators modify the variable's value by 1, either increasing it (with `++`)
or decreasing it (with `--`), but they do so after the current value has been
evaluated in the expression.

For example, in the expression `x++`, the current value of `x` is used
before `x` is incremented by 1. This means that if `x` is 5, the expression evaluates to 5,
but after the expression is evaluated, `x` becomes 6.
Similarly, in the expression `y--`, if `y` is 10, the expression evaluates to 10,
but after evaluation, `y` becomes 9.
Postfix operators are commonly used in loops and other control structures
where the current value of a variable is needed before it is updated.

Lets get postfixing...

*/

// Postfix operator symbol structure: 
// `++` for incrementing a variable by 1
// `--` for decrementing a variable by 1

#include <stdio.h>
int main() {
    int x = 5;
    int y = 10;

    // Using postfix increment operator
    printf("Value of x before increment: %d\n", x); // Output: 5
    printf("Value of x after increment: %d\n", x++); // Output: 5 (current value)
    printf("Value of x now: %d\n", x); // Output: 6

    // Using postfix decrement operator
    printf("Value of y before decrement: %d\n", y); // Output: 10
    printf("Value of y after decrement: %d\n", y--); // Output: 10 (current value)
    printf("Value of y now: %d\n", y); // Output: 9

    return 0;
}
// Output:
// Value of x before increment: 5
// Value of x after increment: 5
// Value of x now: 6
// Value of y before decrement: 10
// Value of y after decrement: 10
// Value of y now: 9

// Explanation:
// The code demonstrates the use of postfix increment (`x++`) and decrement (`y--`)
// operators in C. The current value of `x` is printed before it is incremented,
// and the current value of `y` is printed before it is decremented.