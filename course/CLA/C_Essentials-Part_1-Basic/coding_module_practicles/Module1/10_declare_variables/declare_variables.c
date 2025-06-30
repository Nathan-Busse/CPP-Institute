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

Localhost IP is 127.0.0.1

*/







// Problem code:
//--------------

/*

#include <stdio.h>

int main()
{
	int ip Part1 = 027;
	int ip Part2 = 0;
	int ip Part3 = 0;
	int ip Part4 = 1;

	printf("Localhost IP is %d.%d.%d.%d\n", ip Part1, ip Part2, ip Part3, ip Part4);
}

*/








// Solution code:
//---------------

#include <stdio.h>

int main()
{
	int ip_Part1 = 100+27;
	int ip_Part2 = 0;
	int ip_Part3 = 0;
	int ip_Part4 = 1;

	printf("Localhost IP is %d.%d.%d.%d\n", ip_Part1, ip_Part2, ip_Part3, ip_Part4);
}