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

Write a program which computes and prints the sum of the days in all four quarters of the current year. Use variables to store these four values.

If you want, you can use the code from the previous lab, but you will learn more if you write it from scratch.
Expected output

A leap year:
Days in Q1 of the current year: 91
Days in Q2 of the current year: 91
Days in Q3 of the current year: 92
Days in Q4 of the current year: 92

An ordinary year:
Days in Q1 of the current year: 90
Days in Q2 of the current year: 91
Days in Q3 of the current year: 92
Days in Q4 of the current year: 92


*/


// Previouse exercise code snippet:
//---------------------------------

/*

#include <stdio.h>

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

*/



// Solution code:
//---------------


#include <stdio.h>

void printYear(int daysInFeb, const char *label) {
    int dJan = 31, dFeb = daysInFeb, dMar = 31, dApr = 30;
    int dMay = 31, dJun = 30, dJul = 31, dAug = 31;
    int dSep = 30, dOct = 31, dNov = 30, dDec = 31;

    int quarter1  = dJan + dFeb + dMar;
    int quarter2 = dApr + dMay + dJun;
    int quarter3 = dJul + dAug + dSep;
    int quarter4 = dOct + dNov + dDec;
    int total    = quarter1 + quarter2 + quarter3 + quarter4;

    printf("%s\n", label);
    printf("Days in Q1 of the current year: %d\n", quarter1);
    printf("Days in Q2 of the current year: %d\n", quarter2);
    printf("Days in Q3 of the current year: %d\n", quarter3);
    printf("Days in Q4 of the current year: %d\n", quarter4);

}

int main(void) {
    printYear(29, "A leap year:");
    printf("\n");
    printYear(28, "An ordinary year:");
    return 0;
}