// ================================================================================================
// File: printbox.c (Spring 2018)
// ================================================================================================
// Programmer: Jennifer King
// Professor: Scott Edwards
// Date: 2/7/2018
// Class: CSCI 223 | T/R 4:30PM
// Description:
//      This program makes a box made of a user-inputted character with a user-determined height
//      and width.
// ================================================================================================

#include <stdio.h>
#include <stdlib.h>

// function list
void PrintBox(int width, int height, char design);
void PrintChars(char design, int numChars);

// == main ========================================================================================
//
// ================================================================================================
int main(void)
{
  auto int width;
  auto int height;
  auto char design;
  auto int result;
  
  // Getting and checking width
  printf("Please enter a positive box width: ");
  result = scanf("%d", &width);
  
  if(1 != result)
  {
  	puts("Error reading the width...");
		exit(1);
  }
	if(width == 0 || width > 80)
	{
		puts("Sorry, the width must be between 1 and 80 inclusive...");
		exit(1);
	}
	if(0 > width)
	{
		puts("Sorry, the width must be positive...");
		exit(1);
	}
	
	// Getting and checking height
	printf("Please enter a positive height: ");
	result = scanf("%d", &height);
	
	if(1 != result)
	{
		puts("Error reading the height...");
		exit(1);
	}
	if(height == 0 || height > 80)
	{
		puts("Sorry, the height must be between 1 and 80 inclusive...");
		exit(1);
	}
	if(0 > height)
	{
		puts("Sorry, the height must be positive...");
		exit(1);
	}
	
	// Getting the character
	printf("Please enter the box character: ");
	scanf(" %c", &design);
	
	PrintBox(width, height, design);
	
	return 0;
} // end of main

// == PrintBox ==============================================================================
// This function is responsible for drawing the box.
//
// INPUT:
// 		int width [IN] -- width of box
// 		int height [IN] -- height of box
// 		char design [IN] -- character used to draw the box
//
// OUTPUT:
// 		n/a
// ==========================================================================================
void PrintBox(int width, int height, char design)
{
	auto int counter;
	PrintChars(design, width);
	if(height > 1)
	{
		PrintChars('\n', 1)
		for(counter = 1; counter <= (height - 2); ++ counter)
		{
			PrintChars(design, 1);
			PrintChars(' ', width-2);
			if(width > 1)
			{
				PrintChars(design, 1);
			}
			PrintChars('\n', 1);
		}
		PrintChars(design, width);
	}
	PrintChars('\n', 1);
}

// == PrintChars =============================================================================
// This function displays characters.
//
// INPUT:
// 			char design [IN/OUT] -- character being displayed
//
// OUTPUT:
//	 		n/a
// ===========================================================================================
void PrintChars(char design, int numChars)
{
	auto int counter;
	for(counter = 1; counter <= numChars; ++counter)
	{
		printf("%c", charVal);
	}
}
