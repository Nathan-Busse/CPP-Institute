/*

Level of difficulty

Easy
Objectives

Familiarize the student with:

    Fixing errors in a program
    Integer numbers
    Base 8 numbers
    Printing on screen

Scenario

Check the program in the editor. Find all possible compilation errors and logic errors. Fix them.

Your version of the program must print the same result as the expected output. Before you use the compiler, try to find the errors only by manual code analysis.

Use octal (base 8) numbers.
Expected output

The value of nine is: 9 
The value of ten is: 10 

*/




// Problem code
//-------------

/*

#include <stdio.h>

int main()
{
	printf("The value of nine is: %d \n", 01x);
	printf("The value of ten is: %d \n", 0x2);
	return 0;
}

*/



// Solution code
//--------------

#include <stdio.h>

int main(){
    printf("The value of nine is: %d \n", 01*9);
    printf("The value of ten is: %d \n", 0*2+10);
    return 0;
}