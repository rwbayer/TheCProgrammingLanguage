/*
Exercise 1-6 from The C Programming Language

Instructions: 
Verify that the expression getchar() != EOF is 0 or 1.

Results: 
The output of this function is 1 no matter what input is given to the executable. I'm assuming this is because I did not use a file, so my input never had an EOF marker.
*/


#include <stdio.h> //Standard input & output library

int main()
{
	printf("%d\n", (getchar() != EOF));
}
