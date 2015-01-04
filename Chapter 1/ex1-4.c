/*
Exercise 1-4 from The C Programming Language

Instructions: 
Write a program to print the corresponding Celsius to Fahrenheit table.

Results: 
Modified the equation to calculate fahrenheit from celsius instead of vice versa and adjusted the programs variables accordingly. Due to the change in the program, we could adjust the number of places in the table and not use a float for either variable, but these were left as they were in the opposite version of the same progam (ex 1-3)..
*/


#include <stdio.h> //Standard input & output library

/* print Celsius-Fahrenheit table for celsius = 0, 20, ..., 300; floating-point version */

main()	//Using no type defintion (as in the book) gives a warning that function type defaults to int 
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; //lower limit of temp table
	upper = 300; //upper limit
	step = 20; //step size

	celsius = lower;
	printf("CEL    FAR\n"); //This print statement will add the heading above the table.
	while(celsius <= upper)
	{
		fahr = ((9.0/5.0) * celsius) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
