/*
Exercise 1-3 from The C Programming Language

Instructions: 
Modify the temperature conversion program to print a heading above the table.

Results: 
Added a printf statement before the loop to print the heading above the table.
*/


#include <stdio.h> //Standard input & output library

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300; floating-point version */

main()	//Using no type defintion (as in the book) gives a warning that function type defaults to int 
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; //lower limit of temp table
	upper = 300; //upper limit
	step = 20; //step size

	fahr = lower;
	printf("FAR    CEL\n"); //This print statement will add the heading above the table.
	while(fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
