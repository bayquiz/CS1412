#include <stdio.h>

//     Name: Baylee Quisenberry
//     Section: CS1412 L 502
//     Purpose of the program:
//     The purpose is a demo program to understand the basics of 
//     how to create a c file, edit it, save it, compile it and
//     execute it.
//
//  Function main begins program execution



int main(void)
{
	int ID;
	float shipweight;

	ID = 4518;	//initialize ID
	shipweight = 24.625f;	//initialize shipping weight
	  
	//display the string
	printf("Welcome to C\n");

	//display contents of variables
	printf("The ID of the item is %d\n" , ID);


	printf("The shipping weight of the item is %0.3f\n" , shipweight); 

	//we have to return
	return 0;
} //end function main



















