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
void PrintChars(char design);

// == main ========================================================================================
//
// ================================================================================================
int main(void)
{
  int width;
  int height;
  char design;
  int result;
  
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
// 			int width [IN] -- width of box
// 			int height [IN] -- height of box
// 			char design [IN] -- character used to draw the box
//
// OUTPUT:
// 			n/a
// ==========================================================================================
void PrintBox(int width, int height, char design)
{
		char fill = ' ';
		char newline = '\n';
		
		// top
		for(int a = 0; a < width; a++)
		{
				PrintChars(design);
		}
		
		PrintChars(newline);
		
		// sides
		if(height == 1 || height == 2)
		{
				// if the height is 1 or 2, the top and bottom wil cover it, so height can be skipped
		}
		else
		{
				for(int b = 0; b < (height - 2);b++)
				{
					PrintChars(design); // right side
					if(width == 2)
					{
						PrintChars(design); // left side
					}
					else if(width > 2)
					{
						for(int c = 0; c < (width - 2); c++)
						{
							PrintChars(fill); // making the box hollow
						}
						PrintChars(design); //left side
					}
				}
				PrintChars(newline);
		}
		
		// bottom
		if(height == 2)
		{
				// if the height is 1, the top will cover it and this can be skipped
		}
		else
		{
				for(int d = 0; d < width; d++)
				{
					PrintChars(design);
				}
		}
		PrintChars(newline);
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
void PrintChars(char design)
{
		printf("%c", design);
}
