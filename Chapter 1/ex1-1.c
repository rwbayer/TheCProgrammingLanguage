/*
Exercise 1-1 from The C Programming Language

Instructions: 
Run the "hello, world" program on your system. Experiment with leaving out parts of the program, to see what error messages you get.

Results: 
Program ran as expected. Output was "hello, world" and the cursor moved to the next line.
*/

#include <stdio.h> //Standard input & output library

main () //Using no type definition (as in the book) gives a warning that function type defaults to int
{
	printf("hello, world\n");
}

