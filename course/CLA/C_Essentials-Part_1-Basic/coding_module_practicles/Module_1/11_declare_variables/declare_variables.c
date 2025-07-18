/*

Level of difficulty

Easy
Objectives

Familiarize the student with:

    Fixing errors in program
    Variable names
    Integer numbers
    Printing on screen

Scenario

The program in the editor is a C code taht calculates and prints the number of days in the first half, second half, and the entire current year.

Variable Initialization:
int daysInCurrentFebruary = 29;
int daysInJanuary  = 31;
int daysInFebruary = daysInCurrentFebruary;
int daysInMarch = 31;
int daysInApril = 30;
int daysInMay = 31;
int daysInJune = 30;
int daysInJuly = 31;
int daysInAugust = 31;
int daysInSeptember = 30;
int daysInOctober = 31;
int daysInNovember = 30;
int daysInDecember = 31;

These lines initialize variables representing the number of days in each month. daysInCurrentFebruary is set to 29, which is typically the number of days in a leap year February. The other months have their standard number of days.

Calculation of Days in First and Second Half:
int daysInFirstHalf = daysInJanuary + daysInFebruary + daysInMarch + daysInApril + daysInMay + daysInJune;
int daysInSecondHalf = daysInJuly + daysInAugust + daysInSeptember + daysInOctober + daysInNovember + daysInDecember;

These lines calculate the total number of days in the first half and second half of the year by summing the days in each respective month.

Print the Results:
printf("Days in the first half of the current year: %d\n", daysInFirstHalf);
printf("Days in the second half of the current year: %d\n", daysInSecondHalf);
printf("Days in the current year: %d\n", daysInFirstHalf + daysInSecondHalf);

The code then prints the calculated results using printf statements. It prints the number of days in the first half, second half, and the total number of days in the current year.

Return Statement:
return 0;

Finally, the main function returns 0, indicating successful execution.

Check the program in the editor. Find all possible compilation errors and logic errors. Fix them.

Your version of the program must print the same result as the expected output. You can play with the CurrentFebruary variable value for 28 or 29 to change the output result. Before you use the compiler, try to find the errors only by manual code analysis. Remember to find the logic errors (check the order of the months).

If you want to improve the variable names, then do so, but remember that variable names have to be as descriptive as possible, and also as short as possible.
Expected output

A leap year:
Days in the first half of the current year: 182
Days in the second half of the current year: 184
Days in the current year: 366

An ordinary year:
Days in the first half of the current year: 181
Days in the second half of the current year: 184
Days in the current year: 365

*/





// Problem code:
//--------------

/*

#include <stdio.h>

int main()
{
	int daysIn	CurrentFebruary 	= 29;
	int daysIn	January  		= 31;
	int daysIn	February = daysInCurrentFebruary;
	int daysIn	March 			= 31;
	int daysIn	April 			= 30;
	int daysIn	May 			= 31;
	int daysIn	June 			= 30;
	int daysIn	July 			= 31;
	int daysIn	August 			= 31;
	int daysIn	September 		= 3*;
	int daysIn	October 		= 3+;
	int daysIn	November 		= 3*;
	int daysIn	December 		= 3+;
	int daysInFirstHalf = daysIn January + daysIn December + daysIn March 
		+ daysIn April + daysIn May + daysIn July;
	int daysInSecondHalf = daysIn June + daysIn August + daysIn September 
		+ daysIn October + daysIn November + daysIn February;
	printf("Days in the first half of the current year: %d\n", daysInFirstHalf);
	printf("Days in the second half of the current year: %d\n", daysInSecondHalf);
	printf("Days in the current year: %d\n", daysInFirstHalf + daysInSecondHalf);
	return 0;
}

*/







// Solution code:
//---------------

#include <stdio.h>

/* 
 * printYear:
 *  - daysInFeb: number of days in February (28 or 29)
 *  - label:    header to print ("A leap year:" / "An ordinary year:")
 */
void printYear(int daysInFeb, const char *label) {
    int dJan = 31, dFeb = daysInFeb, dMar = 31, dApr = 30;
    int dMay = 31, dJun = 30, dJul = 31, dAug = 31;
    int dSep = 30, dOct = 31, dNov = 30, dDec = 31;

    int firstHalf  = dJan + dFeb + dMar + dApr + dMay + dJun;
    int secondHalf = dJul + dAug + dSep + dOct + dNov + dDec;
    int total      = firstHalf + secondHalf;

    printf("%s\n", label);
    printf("Days in the first half of the current year: %d\n", firstHalf);
    printf("Days in the second half of the current year: %d\n", secondHalf);
    printf("Days in the current year: %d\n", total);
}

int main(void) {
    printYear(29, "A leap year:");
    printf("\n");
    printYear(28, "An ordinary year:");
    return 0;
}