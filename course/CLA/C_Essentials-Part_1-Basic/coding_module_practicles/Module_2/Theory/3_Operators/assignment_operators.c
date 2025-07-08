#include <stdio.h>

// This code demonstrates the use of the assignment operator in C.
// The assignment operator is used to assign a value to a variable.

int variable = 0; // Declaration and initialization with a constant value
// const char* variable_name; // Declaration only
const char* value = "variable = value; The assignment operator symbol = is used to assign a value to a variable.";

int main() {
	variable = 10; // Assignment inside function is valid
	printf("%s\n", value);
	return 0;
}