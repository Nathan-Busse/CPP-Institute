// Arithmetic Operators in C:
//---------------------------

#include <stdio.h>

// Function prototypes
void multiplication();
void devison();
void addition();
void subtraction();

int main() {
    // This code demonstrates the use of arithmetic operators in C.
    // Arithmetic operators are used to perform mathematical operations on variables and values.

    // Multiplication operator (*)
    multiplication();

    // Division operator (/)
    devison();

    // Addition operator (+)
    addition();

    // Subtraction operator (-)
    subtraction();

    return 0;
}

/* Multiplication, Division, Addition, Subtraction (*, /, +, - respectively)
    are the basic arithmetic operators in C, which are used to perform
    mathematical operations on variables and values.
*/

/*
This code demonstrates the use of the multiplication arithmetic operator * in C.
Lets get multiplying...
*/
void multiplication() 
{
    // The assignment operator = is used to assign a value to a variable. 
    int i, j, k; // i, j, and k are integers
    float x, y, z; // x, y, and z are floating-point numbers

    i = 9; // Assigning a value to i
    j = 10; // Assigning a value to j
    k = i * j; // k is assigned the product of i and j

    x = 24.0; // Assigning a floating-point value to x
    y = 25.0; // Assigning a floating-point value to y
    z = x * y; // z is assigned the product of x and y

    // Optionally print results to verify
    printf("k = %d\n", k); // Print the results of the multiplication of integers
    printf("z = %f\n", z); // Print the results of the multiplication of floating-point numbers
}

/*
Devision Arithmetic Operator in C:
The division operator / is used to divide one number by another.
This code demonstrates the use of the division arithmetic operator / in C.
Lets get dividing...
*/
void devison() 
{
    // The assignment operator = is used to assign a value to a variable.   
    int a, b, c; // a, b, and c are integers
    float m, n, o; // m, n, and o are floating-point numbers

    a = 20; // Assigning a value to a
    b = 4; // Assigning a value to b
    c = a / b; // c is assigned the result of dividing a by b

    m = 50.0; // Assigning a floating-point value to m
    n = 10.0; // Assigning a floating-point value to n
    o = m / n; // o is assigned the result of dividing m by n

    // Optionally print results to verify
    printf("c = %d\n", c); // Print the results of the division of integers
    printf("o = %f\n", o); // Print the results of the division of floating-point numbers
}

/*
Addition Arithmetic Operator in C:
The addition operator + is used to add two numbers together.
This code demonstrates the use of the addition arithmetic operator + in C.
Lets get adding...
*/

// Declaration and initialization of variables:
void addition() 
{
    // The assignment operator = is used to assign a value to a variable.
    int p, q, r; // p, q, and r are integers
    float s, t, u; // s, t, and u are floating-point numbers

    p = 15; // Assigning a value to p
    q = 5; // Assigning a value to q
    r = p + q; // r is assigned the sum of p and q

    s = 30.0; // Assigning a floating-point value to s
    t = 20.0; // Assigning a floating-point value to t
    u = s + t; // u is assigned the sum of s and t

    // Optionally print results to verify
    printf("r = %d\n", r); // Print the results of the addition of integers
    printf("u = %f\n", u); // Print the results of the addition of floating-point numbers
}

void subtraction() 
{
    // The assignment operator = is used to assign a value to a variable.
    int v, w, x; // v, w, and x are integers
    float y, z, a; // y, z, and a are floating-point numbers

    v = 30; // Assigning a value to v
    w = 10; // Assigning a value to w
    x = v - w; // x is assigned the result of subtracting w from v
    y = 100.0; // Assigning a floating-point value to y
    z = 50.0; // Assigning a floating-point value to z
    a = y - z; // a is assigned the result of subtracting z from y

    printf("x = %d\n", x); // Print the results of the subtraction of integers
    printf("a = %f\n", a); // Print the results of the subtraction
}