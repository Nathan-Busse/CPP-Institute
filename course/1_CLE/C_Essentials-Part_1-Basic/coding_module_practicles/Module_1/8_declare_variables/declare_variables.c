/*

Level of difficulty

Easy
Objectives

Familiarize the student with:

    Fixing errors in a program
    Variable names
    Integer numbers
    Printing on screen

Scenario

Check the program in the editor. Find all possible compilation errors and logic errors. Fix them.

Your version of the program must print the same result as the expected output. Before you use the compiler, try to find the errors only by manual code analysis.

If you want to improve the variable names, then do so, but remember that variable names have to be as descriptive as possible, and also as short as possible.
Expected output

The value of ten is: 10 

*/




// Problem code:
//--------------

/*

#include <stdio.h>

int main()
{
	int simpleVari able = 10;
	printf("The value of ten is: %d \n", otherVariable);
	return 0;
}

*/



// Solution code
//---------------

#include <stdio.h>

int main(){
    int numberValue =10;
    printf("The value of ten is: %d \n", numberValue);
}