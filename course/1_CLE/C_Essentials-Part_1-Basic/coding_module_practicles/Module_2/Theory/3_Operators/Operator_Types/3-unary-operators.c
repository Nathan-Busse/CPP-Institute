/*

Unary operators in C++ are operators that operate on a single operand. 
They perform operations such as incrementing or decrementing a value, negating a value, or performing logical negation. 

Here are some common unary operators in C++:

    1. Increment Operator (++) - Increases the value of a variable by 1.

    2. Decrement Operator (--) - Decreases the value of a variable by 1.

    3. Unary Plus (+) - Indicates a positive value (usually redundant).

    4. Unary Minus (-) - Negates the value of a variable.

    5. Logical NOT Operator (!) - Inverts the truth value of a boolean expression.

    6. Bitwise NOT Operator (~) - Inverts the bits of an integer value.

    7. Address-of Operator (&) - Returns the memory address of a variable.

    8. Dereference Operator (*) - Accesses the value at a given memory address.

    9. Sizeof Operator (sizeof) - Returns the size of a data type or variable in bytes.

    10. Type Cast Operators (static_cast, dynamic_cast, const_cast, reinterpret_cast)

*/


// These operators are used to manipulate data and perform operations on single operands in C++. 
// They are essential for various programming tasks, including arithmetic operations, logical operations, and memory management.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Function prototypes
void increment();
void decrement();
void unary_plus();
void unary_minus();
void logical_not();
void bitwise_not();
void address_of();
void dereference();
void sizeof_operator();
void type_cast();   

int main() {
    // This code demonstrates the use of unary operators in C.
    // Unary operators are used to perform operations on a single operand.

    // Increment operator (++)
    increment();

    // Decrement operator (--)
    decrement();

    // Unary plus operator (+)
    unary_plus();

    // Unary minus operator (-)
    unary_minus();

    // Logical NOT operator (!)
    logical_not();

    // Bitwise NOT operator (~)
    bitwise_not();

    // Address-of operator (&)
    address_of();

    // Dereference operator (*)
    dereference();

    // Sizeof operator (sizeof)
    sizeof_operator();

    // Type cast operators
    type_cast();

    return 0;
}

/* Increment Operator in C:
The increment operator (++) is used to increase the value of a variable by 1.
This code demonstrates the use of the increment operator in C.
Lets get incrementing...
*/
void increment() {
    // The assignment operator = is used to assign a value to a variable.
    int a = 5; // a is an integer
    a++; // Incrementing the value of a by 1

    // Optionally print results to verify
    printf("Incremented value of a: %d\n", a); // Print the incremented value of a
}

/* Decrement Operator in C:
The decrement operator (--) is used to decrease the value of a variable by 1.
This code demonstrates the use of the decrement operator in C.
Lets get decrementing...
*/
void decrement() {
    // The assignment operator = is used to assign a value to a variable.
    int b = 10; // b is an integer
    b--; // Decrementing the value of b by 1 
    
    // Optionally print results to verify
    printf("Decremented value of b: %d\n", b); // Print the decremented value of b
}   

/* Unary Plus Operator in C:
The unary plus operator (+) is used to indicate a positive value.
This code demonstrates the use of the unary plus operator in C.
Lets get positive...
*/
void unary_plus() {
    // The assignment operator = is used to assign a value to a variable.
    int c = 15; // c is an integer
    int d = +c; // Using unary plus operator to indicate positive value

    // Optionally print results to verify
    printf("Value of d using unary plus: %d\n", d); // Print the value of d
}

/* Unary Minus Operator in C:
The unary minus operator (-) is used to negate the value of a variable.
This code demonstrates the use of the unary minus operator in C.
Lets get negative...
*/
void unary_minus() {
    // The assignment operator = is used to assign a value to a variable.
    int e = 20; // e is an integer
    int f = -e; // Using unary minus operator to negate the value of e

    // Optionally print results to verify
    printf("Value of f using unary minus: %d\n", f); // Print the negated value of f
}

/* Logical NOT Operator in C:
The logical NOT operator (!) is used to invert the truth value of a boolean expression.
This code demonstrates the use of the logical NOT operator in C.
Lets get logical...
*/
void logical_not() {
    // The assignment operator = is used to assign a value to a variable.
    bool g = true; // g is a boolean variable
    bool h = !g; // Using logical NOT operator to invert the value of g

    // Optionally print results to verify
    printf("Value of h using logical NOT: %d\n", h); // Print the inverted value of h
}   

/* Bitwise NOT Operator in C:
The bitwise NOT operator (~) is used to invert the bits of an integer value.
This code demonstrates the use of the bitwise NOT operator in C.
Lets get bitwise...
*/
void bitwise_not() {
    // The assignment operator = is used to assign a value to a variable.
    int i = 5; // i is an integer
    int j = ~i; // Using bitwise NOT operator to invert the bits of i

    // Optionally print results to verify
    printf("Value of j using bitwise NOT: %d\n", j); // Print the inverted value of j
}   

/* Address-of Operator in C:
The address-of operator (&) is used to get the memory address of a variable.
This code demonstrates the use of the address-of operator in C.
Lets get addressing...
*/
void address_of() {
    // The assignment operator = is used to assign a value to a variable.
    int k = 30; // k is an integer
    int* ptr = &k; // Using address-of operator to get the address of k

    // Optionally print results to verify
    printf("Address of k: %p\n", (void*)ptr); // Print the address of k
}

/* Dereference Operator in C:
The dereference operator (*) is used to access the value at a given memory address.
This code demonstrates the use of the dereference operator in C.
Lets get dereferencing...
*/
void dereference() {
    // The assignment operator = is used to assign a value to a variable.
    int l = 40; // l is an integer
    int* ptr = &l; // Using address-of operator to get the address of l
    int m = *ptr; // Using dereference operator to access the value at the address of l

    // Optionally print results to verify
    printf("Value of l using dereference: %d\n", m); // Print the value of l
}

/* Sizeof Operator in C:
The sizeof operator (sizeof) is used to get the size of a data type or variable in bytes.
This code demonstrates the use of the sizeof operator in C.
Lets get sizing...
*/
void sizeof_operator() {
    // The sizeof operator is used to get the size of a data type or variable in bytes.
    int n = 50; // n is an integer
    size_t size_of_n = sizeof(n); // Using sizeof operator to get the size of n

    // Optionally print results to verify
    printf("Size of n in bytes: %zu\n", size_of_n); // Print the size of n

}
/* Type Cast Operators in C:
Type cast operators are used to convert a variable from one data type to another.
This code demonstrates the use of type cast operators in C.
Lets get casting...
*/
void type_cast() {
    // The assignment operator = is used to assign a value to a variable.
    double o = 3.14; // o is a double
    int p = (int)o; // Using static_cast to convert double to int   

    // Using a C-style cast to convert int pointer to void pointer
    void* ptr = (void*)&p; // Using C-style cast to convert int pointer to void pointer
    // Removing constness from a variable using a C-style cast
    const int q = 100; // q is a constant integer
    int* r = (int*)&q; // Using C-style cast to remove constness      
    // Using dynamic_cast to safely cast a pointer to a derived class (not applicable in this example)
    // Optionally print results to verify
    printf("Value of p after type casting: %d\n", p); // Print the value of p
    printf("Value of r after const_cast: %d\n", *r); // Print the value of r
    printf("Value of ptr after reinterpret_cast: %p\n", ptr); // Print the value of ptr
    // Note: dynamic_cast is not used
    // because it is typically used with class hierarchies and polymorphism.
}       

// Note: The code provided is a simple demonstration of unary operators in C.
// In a real-world application, you would typically use these operators in more complex expressions and logic.
// The code is designed to be educational and may not cover all edge cases or best practices in C programming.
// Always refer to the C language documentation and best practices for production code.