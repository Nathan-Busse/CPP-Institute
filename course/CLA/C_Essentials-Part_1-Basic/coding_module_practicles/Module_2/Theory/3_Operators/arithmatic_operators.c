/*

Arithmetic Operators in C:
Multiplication, Division, Addition, Subtraction (*, /, +, - respectively)
    are the basic arithmetic operators in C, which are used to perform
     mathematical operations on variables and values.


This code demonstrates the use of the multiplication arithmetic operator * in C.

Lets get multiplying...

*/

#include <stdio.h>

// Declaration and initialization of variables:

int i, j, k; // i, j, and k are integers
float x, y, z; // x, y, and z are floating-point numbers

int main() { 
// The assignment operator = is used to assign a value to a variable. 

	i = 9; // Assigning a value to i
    
	j = 10; // Assigning a value to j
    
	k = i * j; // k is assigned the product of i and j

	x = 24.0; // Assigning a floating-point value to x

	y = 25.0; // Assigning a floating-point value to y

	z = x * y; // z is assigned the product of x and y

	// Optionally print results to verify
	printf("k = %d\n", k); // Print the results of the multiplication of integers
	printf("z = %f\n", z); // Print the results of the multiplication of floating-point numbers

	return 0;
}


