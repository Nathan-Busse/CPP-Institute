/*

What is char Type in C?
The `char` type in C is used to store single characters.
It is a data type that can hold a single character, such as 'a', 'b', '1', or '$'.
The `char` type is typically used to represent characters in a string or to store individual characters.
In C, the `char` type is an integral type, meaning it can also hold small integer values.
The size of a `char` is usually 1 byte, which can represent 256 different values (from -128 to 127 for signed `char`, or 0 to 255 for unsigned `char`).
This allows it to store not only characters but also small integers.
The `char` type is often used in conjunction with string manipulation functions and character handling functions in C.
It is important to note that in C, characters are represented using their ASCII values, which are numerical representations of characters.
For example, the character 'A' has an ASCII value of 65, 'B' is 66, and so on.
When using the `char` type, you can perform operations like arithmetic and comparisons, as it is treated as an integer type under the hood.
This allows for operations such as incrementing a character to get the next character in the ASCII sequence.
In summary, the `char` type in C is a fundamental data type used to represent single characters, and it can also hold small integer values.
It is widely used in string manipulation and character handling operations in C programming.

*/

#include <stdio.h>
#include <string.h> // For string functions

int main() {
    char greeting[] = "Hello, world!";
    int length = strlen(greeting);  // Gets the length of the string

    printf("Greeting: %s\n", greeting);
    printf("Length: %d characters\n", length);

    // Modify a character in the string
    greeting[7] = 'W';
    printf("Modified Greeting: %s\n", greeting);

    // Copy strings
    char copy[50];
    strcpy(copy, greeting);  // Copy greeting into copy
    printf("Copied String: %s\n", copy);

    // Compare strings
    int comparison = strcmp(greeting, copy);
    printf("Strings are %s\n", comparison == 0 ? "identical" : "different");

    return 0;
}


// The above code demonstrates the use of the `char` type in C.
// It initializes several integer variables to indicate various properties of the `char` type.  

