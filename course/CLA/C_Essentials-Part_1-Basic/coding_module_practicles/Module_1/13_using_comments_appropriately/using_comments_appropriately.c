/*

Level of difficulty

Easy
Objectives

Familiarize the student with:

    Using comments
    When not to use comments
    Ways to replace comments with code

Scenario

Comments are not always the best way to say something in a code. Sometimes it's much better to leave some information in the code.

In the worst case scenario, comments can lie to the user/programmer (you should never do that on purpose). It's a good idea to use readable variable names.

Sometimes it's better to divide your code into named pieces (later we'll call these pieces functions). In some situations, it's a good idea to write the steps of calculations in a clearer way.

The code in the editor contains some of these situations; try to improve it (and remove comments - sometimes removing comments will be an improvement itself).

If you don't understand all of the code here, don't worry. Try to focus on the comments.
Expected Output
There are 10800 seconds in 3 hours.
There are 180 seconds in 3 minutes.
There are 300 seconds in 5 minutes.

*/



// Problem code:
//--------------

// #include <stdio.h> /* we included stdio.h */
// #include <stdlib.h> /* we included stdlib.h */

// int main()
// {
//  int v=10800; /* 3*60*60 */
  
//  int zzz=3*60; /* This is a variable to hold the value of 3 minutes in seconds */

//  int zzz=5*60; /* This is a variable to hold the value of 6 minutes in seconds */
  
//  float siii=3.141526; /* This is the value of pi */
  
  
//  /* printf(" value of some variable: %d \n", otherVariable);
//      here we should print the v value, but a programmer didn't have time to write the code.
//      However, he/she likes writing long, well formatted comments
//   */
// }



// Solution code:
//---------------

#include <stdio.h>
#include <stdlib.h>

int main() {
    int seconds_in_minute = 60;
    int seconds_in_hour = seconds_in_minute * 60;

    int hours = 3;
    int minutes1 = 3;
    int minutes2 = 5;

    int total_seconds_in_hours = hours * seconds_in_hour;
    int total_seconds_in_minutes1 = minutes1 * seconds_in_minute;
    int total_seconds_in_minutes2 = minutes2 * seconds_in_minute;

    printf("There are %d seconds in %d hours.\n", total_seconds_in_hours, hours);
    printf("There are %d seconds in %d minutes.\n", total_seconds_in_minutes1, minutes1);
    printf("There are %d seconds in %d minutes.\n", total_seconds_in_minutes2, minutes2);

    return 0;
}
