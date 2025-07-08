#include <limits.h>
#include <stdio.h>

int main(void){
    float_can_cause_loss_of_accuracy_example();
    float_has_a_limited_storage_capacity_scenerio();
    implementation_dependent_issue_scenerio();
    return 0;
}


/*

What happens when we’re forced to convert integer values into float values or vice versa? 
The transformation from type int into float is always possible and feasible, but in some cases can cause a loss of accuracy. 
Consider the example below:

*/

void float_can_cause_loss_of_accuracy_example(void){
    int i = 100;
    float f = i;

    printf("Output of float_can_cause_loss_of_accuracy_example is: %f\n", f);
}

/*

After the second assignment, the value of the variable f is 100.0, because the value of type int (100) is automatically converted into a float (100.0). 
The transformation affects the internal (machine) representation of those values, as computers use different methods for storing floats and ints in their memory.

Let's consider the opposite situation now.
    As you’ve probably guessed, these substitutions result in a loss of accuracy – the value of the variable i will be 100. 
    Twenty-five hundredths has no meaning in the int world. 
    
    There’s another aspect of the operation: converting a float into an int is not always feasible. 
       
Integer variables (like floats) have a limited capacity.
    They cannot contain arbitrarily large (or arbitrarily small) numbers. 
    
    For example: 
        if a certain type of computer uses four bytes (i.e. 32 bits) to store int values, 
            you’re only able to use the numbers from the range of -2147483648..2147483647.

            Here is a real world scenario:        

*/


void float_has_a_limited_storage_capacity_scenerio(void){
    int i;
    float f;

    f = 100.25;
    i = f;

    printf("Output of float_has_a_limited_storage_capacity_scenerio is: %d\n", i);
}

/*

The i variable is unable to store such a large value, but it isn’t clear what will happen during the assignment. 
Certainly, a loss of accuracy will occur, but the value assigned to the variable i is not known in advance. 
In some systems, it may be the maximum permissible int value, while in others an error occurs, and in others still the value assigned may be completely random.

This is what we call an implementation dependent issue. 
It's the second (and uglier) face of software portability.

Below is a real world scenario of an implementation dependent issue

*/

void implementation_dependent_issue_scenerio(void){
    int i;
    float f;

    f = 1E10;
    i = f;

    printf("Output of implementation_dependent_issue_scenerio is: %d\n", i);
    if (f > INT_MAX || f < INT_MIN) 
    {
        printf("Warning: float value exceeds int limits\n");
    }
}
