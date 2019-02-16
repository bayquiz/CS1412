#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//		Name:		Baylee Quisenberry
//		Section:	CS1412 L502
//		Purpose:	We will write short programs to demonstrate the 				use of pointers.
//

int matrix();
 
int main(void) {

// QUESTION ONE



	int number = 12;
	float decimal = 24.1;
	char letter = 'B';
	
	int *ptr = &number;
	//for type int
	printf("The memory address of %d is: %p\n", number);			
	printf("The memory address of the pointer is: %p\n", (void*) ptr);
	printf("The value of the int %d is %d\n", number, *ptr);
	printf("The value of the pointer is %d\n",  *ptr);
	
	printf("The memory size of int %d is: %1d bytes\n",number, sizeof(number));
	printf("The memory size of the pointer is :%1d bytes\n", sizeof((void*) ptr));

	//for type float
	printf("\n");
	float *point = &decimal;
	printf("The memory address of %f is: %p\n", decimal);
	printf("The memory address of the pointer is: %p\n", (void*) point);
	
	printf("The value of the float %f is : %f\n", decimal, *point);
	printf("The value of the pointer is %f\n", *point);

	printf("The memory size of float %f is: %1d bytes\n", decimal, sizeof(decimal));
	printf("The memory size of the pointer is: %1d bytes\n", sizeof((void*) point));
	printf("\n");
	//for type char
	char *points;
	*points = letter;
	printf("The memory address of %c is: %p\n", letter);
	printf("The memory address of the pointer is: %p\n", (void*) points);

	printf("The value of the char %c is %d\n", letter, *points);
	printf("The value of the pointer is %d\n", *points);

	printf("The memory size of char %c is: %1d bytes\n", letter, sizeof(letter));
	printf("The memory size of the pointer is: %1d bytes\n", sizeof((void*) points));



//QUESTION 2	

	matrix();
	


} // end of main

int matrix(void) {
	
	int i, x;				//just used as iterators. I for row, x for column
	int row, col;		//setting up rows and columns
	int firstM[10][10];			//first matrix just making it large enough
	int secondM[10][10];			//second matrix	making it large enough
	int addition[10][10];			//matrix for the addition of the first two
	
	printf("Enter the number of rows and columns for the matrix\n");
	scanf("%d%d", &row, &col);
	printf("Enter elements of matrix 1: \n");
	for(i = 0; i< row; i++) {					//loop for each row
	  for(x = 0; x< col; x++) {				//loop for each column	
	    scanf("%d", (*(firstM + i) + x));		//gather the elements using pointer
	  }
	}
	printf("Enter elements of matrix 2: \n");
	for(i = 0; i<row; i++) {			//loop for each row
	  for(x = 0; x<col; x++) {			//loop for each column
	    scanf("%d",(*(secondM + i) + x));		//gather with pointer
	  }	 
	}
	printf("The sum of the matrix is: \n");
	for(i = 0; i< row; i++) {			//loop for each row
	  for(x= 0; x< row; x++) {			//loop for each column
	    *(*(addition + i) + x) = *(*(firstM + i) + x) + *(*(secondM + i) + x);
	    printf("%d ", *(*(addition + i) + x));		//add using pointer references
	  }
	 printf("\n");
	}

	
}//end of matrix function 	




