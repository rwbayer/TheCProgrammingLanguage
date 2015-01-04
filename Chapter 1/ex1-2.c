/*
Exercise 1-2 from The C Programming Language

Instructions: 
Experiment to find out what happens when printf's argument contains \c, where c is some character not listed above.

Results: 
I chose to use the character "d" because it is not one of the common escape sequence characters. 
The compilation generated the following warning: "unknown escape sequence '\d'"
When I ran the executable, the program printed a "d" character, so although the compiler shows a warning, it must default to printing only the character.
*/


#include <stdio.h> //Standard input & output library

main()	//Using no type defintion (as in the book) gives a warning that function type defaults to int 
{
	printf("\d"); //Using the d character, which isn't a common escape sequence
}
