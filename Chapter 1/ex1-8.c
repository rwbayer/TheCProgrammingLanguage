/*
Exercise 1-8 from The C Programming Language

Instructions: 
Write a program to count blanks, tabs, and newlines.

Results: 
For this program, I used a hard-coded file named "test.txt" that had a random Sherlock Holmes story inside to test. After opening the file, I read a single character and incremented respective counters accordingly.
*/


#include <stdio.h> //Standard input & output library

int main()
{
	int c;
	int blanks = 0;
	int tabs = 0;
	int newlines = 0;
	FILE *fp;
	
	//open the file
	fp = fopen("test.txt", "r");	
	
	//if there was an error opening the file
	if(fp == NULL)
	{
		printf("Error opening file.\n");
		return 1;
	}
	printf("File opened.\n");
	//loop through each character and count whether it falls into one of our categories
	while ((c=fgetc(fp)) != EOF)
	{	
		if(c == ' ')
			blanks++;
		if(c == '\t')
			tabs++;
		if(c == '\n')
			newlines++;
	}
	//close the file
	fclose(fp);
	
	//print the data collected
	printf("The input had %d blanks, %d tabs, and %d newlines.\n", blanks, tabs, newlines);
	return 0;
}
