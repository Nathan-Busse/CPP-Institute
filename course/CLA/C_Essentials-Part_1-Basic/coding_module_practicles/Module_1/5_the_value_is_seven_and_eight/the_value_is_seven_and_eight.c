/*

Level of difficulty

Easy
Objectives

Familiarize the student with:

    Fixing errors in a program
    Integer numbers
    Printing on screen

Scenario

Check the program in the editor. Find all possible compilation errors and logic errors. Fix them.

Your version of the program must print the same result as the expected output. Before you use the compiler, try to find the errors only by manual code analysis.
Expected output

The value of seven is: 7 
The value of eight is: 8

*/




// Problem code:
//--------------

/*

#include <stdio.h>

int main()
{
	printf("The value of seven is: %d \n", 0087);
	printf("The value of eight is: %d \n", (8000x - 7992x)/x);
}

*/




// Solution code:
//---------------

#include <stdio.h>

int main(){
    printf("The value of seven is: %d \n", 00*8+7);
    printf("The value of eight is: %d \n", (8000 - 7992));

}