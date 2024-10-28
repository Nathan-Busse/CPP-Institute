# C Essentials - Part 1: Module 1

## In this module, you will learn about:
	- Languages: natural and artificial,
	- Machine Languages,
	- High-Level programmig languages,
	- Obtaining the machine code: compilation process,
	- Writing simole programs,
	- Variables,
	- Integer values in real life and in C,
	- Integer literals,
	- Comments. 
	
	https://edube.org/uploads/media/default/0001/01/2e51419672631351fe94388583dcc841552a57d9.png
	
	
	# Natural language vs programming language. 
	
	Part 1 Module 1 will cover what the "C" language is and what we use the "C" language for. 
	Lets focus on the term *language* for a moment:
	
### What is language?

Language is a mechanism known to us and to our partners that allows us all to understand each other and to be understood. We can use our language for:
	-1 speaking 
	-2 writing 
	-3 Reading
	-4 Listening 
	-5 Thinking
	
At least one language accompanies us throughout our whole lives – it's our native language, our mother tongue, which we learn almost unconsciously at the very beginning of our lives. We will learn other languages, mostly as a result of a conscious decision, perhaps forced by social conditions or business needs, or perhaps simply out of personal interest.

https://edube.org/uploads/media/default/0001/01/5fe225cd2d26d033ea643b788d284afc5ef215ba.png

The languages we use to communicate with other people are called natural languages.

These languages were created cenuries ago and are still sbjecct to change to this very day. If one were to ignore languages that were created artificially such as klilong.

However, there are languages whose creation and development were and continue to be dictated by specific needs, and their development is fully subject to control by wide groups of people, such as international committees and work groups.

The shapes of these languages are defined by international standards, and although they are understood by many people, the exchange of thoughts between human-beings is not their most important application.

Such languages are, among others, *programming languages*. You are probably familiar with this concept already. A programming language is defined by a set of certain rigid rules, much more inflexible than any natural language.

For example, these rules determine which symbols (letters, digits, punctuation marks, and so on) could be used in the language. This part of the definition of the language is called *lexicon*.


Another set of rules determines the appropriate methods of collating the symbols - this is the *syntax* of the language.  

We would also like to be abble to recognize the meaning of every statement expressed in the language - and this is what we call *Semantics*. 

Any program we write must be correct in these 3 ways:
	-1 Lexically
	-2 syntactically
	-3 Semantically
otherwise the program will neither *run* or *produce* any acceptible results. You can be sure that in the course of my programming career you'll experience these errors, these *err* is human, and these humans write comuter programs. 

The expressive power of programming languages is alot weaker than those offered by natural languages. We. cannot simply use programming languages to express human emotion, since the message embedded inside a computer program is not intended for a human, but for a machine.  

some might ask why we need a programming language at all.

That's a good question, one we will try to answer for you now:

		A computer, including the most technically suphisticated computers are devoid of even a trace of intelligence. 
		
		A computer is like a well trained dog - it responds to only a predetermined *set of known commands.* 
		
		These recognized commands are very simple. We can imagine that the computer responds to orders like “take that number, add to another and save the result”. A complete set of well-known commands is called an *instruction list*, sometimes abbreviated to IL. Different types of computers may vary depending on the size of their ILs and the instructions themselves could differ completely from one model to the next.
		
		The IL is in fact the alphabet of a language, commonly known as a *machine language.* This is the simplest and most primary language we can use to give commands to our computer. We could say that it's the computer’s mother tongue.
		
		Computer programming is the act of composing selected commands (instructions) in the proper order so that a desired effect is produced. The effect itself could be different in each case – it's up to the programmer's imagination, knowledge and experience to determine what that effect should be.

		
		https://edube.org/uploads/media/default/0001/01/73b776c22c826c73de55fc697c05845b26209e13.png
		
		It is possible, and often used in practice, for a computer program to be coded directly in machine language using elementary instructions (orders). This kind of programming is tedious, time consuming and highly prone to a programmer's mistakes. At the early stages of computer technology, it was the only available method of programming and it very quickly revealed some serious flaws. Firstly, programming in machine language requires an exhaustive knowledge of the computer’s hardware design and its internal structure. This also means that replacing the computer with one that differs in design can make the programmer's entire knowledge unusable. Also, the old programs could become completely useless if the new computer “used” a different IL. Thus, a program written for a specific type of computer could be completely useless for other computers and vice versa. Secondly, programs written in machine language are very difficult for humans to understand, including experienced programmers. It also takes a long time to develop programs in machine language, and it’s very costly and cumbersome too.

		All these circumstances led to a need for some kind of bridge between the human language (natural language) and the computer language (machine language). That bridge is also a language – an intermediate common language for humans and computers to work together. Such languages are often called high-level programming languages.

		A high-level programming language is at least somewhat similar to a natural language; it uses symbols, words and conventions readable to humans. This language enables humans to express complex commands for computers.


		
		You might ask how we make computers understand programs written in this way. Encouragement won’t work, but you can just translate your program into machine language. Moreover, the translation can be done by a computer, making the whole process fast and efficient.

		Notice how many benefits you can get from a course this. You don’t need to learn many different machine languages – you just need to know one high-level programming language. If there is a *translator* designed for a specific computer, your program could be run without any problems. In other words, the programs written in high-level languages could be translated into any number of different machine languages and thus make them usable on many different computers. This feature of high level programming languages is called *portability*. 
		
		
### Compilation 

The translation is constructed by a speciel computer program called a *compilar.*

The process of translating from a high-level language into a machine language is called *compilation*. 

### Process of creating a new program. 

To write source code you will require:

-1. A text editor that allows users to manipulate text without any formatting information, which is why Microsoft Word is not a good choice. 

	A text editor like Notepad is an acceptible example.
	
	This code is then placed in a file and the name of the file should give you some clue to its content.  
	
	For example it is common for a file containing source code in the "C" language to have its name ending with the suffix "*.c*", so if you wrote a computer program and decided to name it:
	"hello_world", it would be a good idea to put the source code into a file named "hello_world.c". 
	
-2 Your source code needs to be *compiled*. To do so you run a compiler, instructing it where you storeed the source code that you want to be translated into machine language. The compiler reads your code, does some complicated analysis and its first goal is to verify that the code you wrote is error free. 

	These analysis are very insightful, however that they are made by a machine and are basic regarding expectation.
	
	OK, if your mistake was that you tried to add up two numbers using “#” instead of “+”, the compiler will kindly inform you of your error.

	However, if you typed a "-" instead of a "+", the compiler will no longer be able to guess that your intention was to add two numbers, rather than to subtract them. 
	
	*Do not expect the compiler to think for you.* But there’s no reason to be sad about it – thanks to that, developers are still needed.
	
	If the compiler doesn’t notice any mistakes in your source, the result of its work will be a file containing your program translated into machine language. That file is commonly called an *executable file.*

	The name of the file depends on the compiler you use and the operating system you’re working with. For example, most compilers designed for the Unix/Linux system create an output file named “a.out” by default. Compilers designed for use in MS Windows® can give this file the same name as the source file, only changing the suffix from “.c” to “.exe”.
	
https://edube.org/uploads/media/default/0001/01/f19fcbe3a1e900a702900559b63718e3586b7fb7.png

However it is more complicated than it looks for the following reason:
	
	Your source code might be comprehesive and is split among several source files. 
	
	Occasionally your program was not written by you alone but by a team of developers in which case the division of source files into multiple files is manditory. If that is the case the compiling splits into 2 phases:
		
		-1 A compilation of source, in order to translate it into machine language. 
		-2 A joining (or glueing) of your executable code with the executable code derived from other developers into a single and unified product. 
		
			The phrase of "glueing" the different executable codes is commonly known as *linking*. 
			
			The program that conducts the *linking* process is called a *Linker*. 
			
# A few words about C. 

The "C" language is one of the most oldest demanded languages still in-use in the world!

It was created in the early seventies of the twentieth century by Dennis Ritchie while he was working in Bell Laboratories. Some say that “C” was a by-product of a project which led to the very first version of the Unix operating system. There are many other programming languages widely used – some of them could be regarded as “C” descendants. They even inherited a name from their ancestor – like “C++” or “C#”. Others borrowed some features from the original “C” and added lots of new ones – like Perl, Java or JavaScript.

What is the most common use of “C”? It is the so-called *general-purpose programming language*,

i.e., suitable for almost any programming project and at the same time not particularly predestined to any specific, narrow class of applications. It’s best if used for coding drivers, embedded applications or operating systems (for example, the Linux kernel is mainly coded in “C”). You can also use it for building complex utilities. We can assure you that knowing the “C” language is very helpful if you want to learn C++, C# or Java.

We guarantee you that the time you spend learning the “C” language won't be wasted.

# "The C Programming Language" book
If you take the learning of the "C" language seriously, you wont stop at reading this text. 

Among the hundreds of books written about the "C" language, their is one book that is highly recommended. 

Once you're a proficient programmer, you’ll want access to a source of knowledge through which you can quickly understand the answers to emerging questions or just fill in the gaps in your memory. Instead of a handbook, you’ll need a book which briefly describes the language standards – everything that’s really important and nothing more. This book is actually a report (permanently improved and updated), published by the ISO standardization committee. The most recent version of the report is ISO/IEC 9899: TC3. You can find it on the Internet and look it up, but it’s still too soon for you to be reading it.

Look into that when you finish our course, not sooner.

https://edube.org/uploads/media/default/0001/01/5cd8e7f241b40b9c1d5afe70c6bd325db0f00bd2.png

# Numbers and how computers see them. 

The numbers handled by modern computers consist of 2 types:

	-1. Integers
			Integers, are numbers that cannot contain any of the fractional part. 
		
	-2. Floating-point
			Numbers/floats that can contain the fractional part. 
			
The definition is not entirely accurate but good enough for this module's purpose. 

This distinction is extremely important and the boundry between the 2 number types:
	-1. Integers. 
	-2. Floating-point. 
are VERY STRICT!

Both of these kinds of number types significantly differ in how they are *STORED* in a computer's memmory and in the range of acceptable values. 

The characteristic of a number which determines its:
	-1. kind
	-2. range
	-3. application
is called a *type*. 

At this point we have made friends with 2 types of the "C" language:

	-1. Integer type known as an:
<script>

	int

</script>

	-2. Floating-point type known as an:
<script>
	
	float
	
</script>

## How does the "C" language recognize integers?

Integers are recognized by C as a *string of digits* that make up a number. However, these digits are reserrved only for characters that are numerical and nothing else inside the number. 

For ezample:

We use the number eleven million one hundred and eleven thousand hundred and eleven. If you were had to write it down numerically:

		- Imperial = 11, 111, 111
		
		- Metric   = 11 111 111
		
		Obviosly, this makes it easier if the number is made up of many digits. However in "C" it is restricted. You must write this positive number as follows:
		<script src="" type="c">
		
			111111 
			
		</script>
		
		To write a negetive number in "C" by first adding a minus or hyphon (-) as follows:
		<script src="" type="c">

			-111111 
			
		</script>	
		
Positive numbers *DO NOT* require to be preceded by the plus sign (+) but you can still do it if you really want to. The following lines describe the same number:

		<script src="" type="C">
			
			+123
//		   SAME AS:
			123			
			
		</script>
		
There are 2 additional conventions  unknown to the world of mathematics since it can only be implemented programmatically due to how computer processor's *Arithmitic Logic Unit* also known as a ALU handles calculations, which are:


	-1 Octal representation. 
	-2 Hexidecimal number. 
	
## What is an Octal representation and how does it work?
	
	An Octal representation allows the ability to utilize octal numbers. 
	
	If an inteer numbers is preceded by the 0 digit, it will be regarded as an *Octol value. 

	This means that the number must contain diggits taken from the. [0..7] range only. 
	
	Bellow is an example of an Octal number with a deciimal value ewual to 83:
	<script src="" type="c">
		
		0123
		
	</script>
	
Here is an exmaple of a *hexadecimal number* with a decimal value equal to:

	<script src="" type="c">
		
		0x123
		
	</script>
	
# A basic example program showing you how to print an integer number in "C":
<script src="" type="c">
    #include<stdio.h>
	
	int main(void){
		printf("%d\n", IntegerNumberOrExpression);
		return 0;
	}
</script>

# A basic example program showing you how to print a float-point number:
<script src="" type="c">
	
	#inlcude<stdio.h>
	
	int main(void){
		printf("%f\n", FloatNumberOrExpression);
		return 0;
	}
</script>

In both cases, you should include the stdio header file like this:
<script src="" type="c">
	
	#include<name_of_header_file.h>
	
// In this case we call the stdio header file below:

	#include<stdio.h>
	
	
</script>

https://edube.org/uploads/media/default/0001/01/a4b74fa1407cbc1b82f21c4016150712ee190d51.png

# Variables

## What are variable?

A variable is a container that contain values that can be changed in almost any way possible. 

# What does a every variable consist out of:
	- name;
	- type;
	- value;
	
## Variable names:
Variables do not appear into our program on its own since developers have to decide how many variables they want inside their program. A developer also needs to give each individual variable a unique name. If you want to give a name to a variable you must abide to some strict rules:

	-1. The name of the variable must be composed of:
			- Upper-case Latin letters.
			- Lower-case Latin letters. 
			- Digits
			- Underscore character (_)
		
	-2. The name of the variable must begin with a letter. 

	-3. The underline character (-) is considered as a letter. 
	
	-4. The upper-case and lower-case letters are treated as 2 different individual names as follows:

				-Upper-case --> ALICE
				-Lower-case --> alice
				
Note that the same restrictions apply to *function names*

The standard of the “C” language does not impose restrictions on the length of variable names, but a specific compiler may have a different opinion on this matter. Don't worry; usually the limitation is set so high that it’s unlikely that you would actually want to use such long variable names (or functions).

https://edube.org/uploads/media/default/0001/01/da91040edd06e75d6ccc2134e0effb656e2c39ff.png

Here are some correct, but not always convenient variable names:

- variable

- i

- t10

- Exchange_Rate

- counter

- DaysToTheEndOfTheWorld

- TheNameOfAVariableWhichIsSoLongThatYouWillNotBeAbleT oWriteItWithoutMistakes

- _ ( *underscore* )

The last name particularly may raise concerns, but from the compiler's point of view there is nothing wrong with it.

And now some incorrect names:

- 10t (does not begin with a letter)

- Adiós_Señora (contains illegal characters)

- Exchange Rate (contains a space)

# Variable