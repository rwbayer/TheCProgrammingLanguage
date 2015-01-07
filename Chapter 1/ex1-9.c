/*
Exercise 1-9 from The C Programming Language

Instructions: 
Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.

Results: 
For this program, I used a hard-coded file named "test.txt" that had a random Sherlock Holmes story inside to test. After opening the file, I read a single character and incremented respective counters accordingly.
*/


#include <stdio.h> //Standard input & output library

int main()
{
	int c;
	//traverse the input while its not at the end
	while ((c=getchar()) != EOF)
	{	
		//if you encounter a space, keep going until you find something else, then put 1 space.
		if(c == ' ')
		{
			while((c=getchar()) == ' ');
			putchar(' ');
			if(c == EOF) 
				break;
		}
		putchar(c);
	}
	
	return 0;
}
