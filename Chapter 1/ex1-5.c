/*
Exercise 1-5 from The C Programming Language

Instructions: 
Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.

Results: 
Adjusted the conditions and arguments of the for loop to decrease instead of increase.
*/


#include <stdio.h> //Standard input & output library

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300; floating-point version */

main()	//Using no type defintion (as in the book) gives a warning that function type defaults to int 
{
	int fahr;
	
	for(fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
