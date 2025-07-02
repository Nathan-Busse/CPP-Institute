/*

Your first program

Now we’d like to show you a very simple (and completely useless) program written in the “C” language. Using this example, we’ll show you some basic rules as we modify the program many times, enriching it with various elements and simultaneously expanding our programming knowledge.

First, we define our expectations for the program. They’ll be very modest. We want a short and rather meaningless text to appear on the screen. Let's assume that the text should proclaim to the world:

Hello, World!
*/

#include <stdio.h>

int main(void){
    puts("Hello, World!");
    return 0;
}

/*

Pay attention to the character # (hash) at the beginning of the first line. It means that the content of this line is a preprocessor directive. We’re going to tell you more about the preprocessor a little bit later, but for now we’ll just say that it’s a separate part of the compiler, whose task is to pre-read the text of the program and make some modifications to it. The prefix “pre” suggests that these operations are performed before the full processing (compilation) takes place.

We’ve already mentioned something about blocks. Let's go a little deeper now. One of the most common types of blocks used to build “C” programs is functions. If you understand functions only in a purely mathematical sense, this still is a pretty good clue. Imagine a function as a black box, where you can insert something into it (not always necessary) and take something new out of it as if out of a magic hat. Things that are put in the box are called function rguments (or function parameters). Things that are taken out of the box are called function results. In addition, a function can do something else on the side. If this sounds rather vague, don't worry, we’ll be talking about functions many times in more detail.




Inside the main function body we should write what our function (and thus the program) is supposed to do. We look inside and find a reference to a block called puts. This is what we call a function invocation. Now let’s consider a few important details.

Firstly, note the emicolon at the end of the line. Each instruction (precisely: each statement) in “C” must end with a semicolon – without it the program will be incorrect. A statement like this says: instruct the function named puts to show text on the screen. You might ask – how do we know that the puts function will do that for us? Well, we know it from the “C” language standards, but also, the name of the function is an abbreviation of “PUT String”. The text intended to be shown on the screen is passed to the function as a function parameter. Remember that the name of the invoked function must always be followed by a pair of parentheses ( and ), even when the function doesn’t expect any parameters from us.

Secondly, the parameter of the function puts is text (string). For simplicity, we can assume that strings in a program in “C” are always enclosed in quotes – in that way the compiler distinguishes the text that is sent to the user of the program and the text intended to be compiled (translated into machine language). This distinction is very important. Take a look:

int main(void);

The line above is the main function prototype.















We’re coming to the end now. There’s only one line left to explain in our program. This is:

return 0;

Besides the function invocation, this is another statement of the “C” language. Its name is just return and that’s exactly what it does. Used in the function, it causes the end of the function execution. If you perform return somewhere inside a function, this function immediately interrupts its execution. The zero that you see after the word return is the result of your function main. This is important – this is how your program tells the operating system the following message: I did what I had to do, nothing stopped me and everything is OK. If you were to write:

return 1;

it would mean that something had gone wrong, it didn’t allow your program to be successful and the operating system could then use that information to react in the most appropriate way.

Is that all? Yes! Let's look again at our program and see what’s happening step by step:

    we introduce the function main into our program – it’ll be executed when you start the program;
    we invoke the function puts inside the main function – it’ll print the text on the screen;
    the program finishes immediately after printing, indicating that everything you expected to achieve has been achieved.

We hope that wasn’t as difficult as it seemed at first glance. Now we’ll try to persuade the computer to compute something for us. In fact, this is what we use computers for.

*/