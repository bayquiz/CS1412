#include <stdio.h>

//		Name:		Baylee Quisenberry
//		Class:		CS1412 L502
//		Purpose:	write a program that demonstrates //	 	  our knowledge of function.
//

int factorial(int );
int swapVal(int, int);
void swapRef(int*, int*);
//int array();
void selection_sort(int array[], int , int, int, int);
void series();


void main() {

// *********************************************** FIRST QUESTION ********************************************************
//swap function first
	int num1, num2;				//gathered from user
	printf("Please enter 2 numbers : \n");
	scanf("%d%d", &num1 , &num2);
	
	printf("Your values before the swap by value are %d and %d.\n", num1, num2);
	swapVal(num1, num2);
	printf("\n");
	printf("After swap by value. Num1 : %d. Num2 : %d\n", num1, num2);
	
	//in call by value a copy of the arguments is passed to the arguments of the function.
	//so it is just a COPY. no changes will be made the the original arguments.


	swapRef(&num1, &num2);
	printf("After swap by reference. Num1: %d. Num2: %d\n", num1, num2);

	//in call by reference the adress of the arguments is passed to the arguments of the function.

	//this means the value IN THE ADRESS is being changed. So the original values will ALSO BE ALTERED.	


//done with swapping

// ********************************************** SECOND QUESTION *********************************************************
//selection sort with the array
// 
 
	int size, temp, x, j, elements, k;
	
	printf("Please enter n: \n");
	scanf("%d", &elements);
	int array[elements];
	printf("Please enter %d numbers: \n", elements);
	for(k = 0; k<elements; k++) {
		scanf("%d", &array[k]);
	}
		
	selection_sort(array, 0, 0, elements, 1);
	
	printf("The array in sorted ascending order is: \n");
	for(x = 0; x< elements; x++) {	
		printf("%d ", array[x]);
	}


//done with selection sort
// ******************************************* THIRD QUESTION ************************************************************
//factorial function
	series();

// end of the part for the factorial


}

int swapVal(int num1, int num2) {

	int temp = num1;
	num1 = num2;
	num2 = temp;

}
//end of swapVal function


void swapRef(int *num1, int *num2){
	
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}
//end of swapRef function


void selection_sort(int array[], int x, int j,int size, int flag) {
	int temp;		//temp variable used for reassignment
	
	if(x < size -1)	{	// to start the comparison of different index
		if(flag) {	
			j = x + 1;	//so we keep comparing different index
		}
		if(j < size) {	
			if(array[x] > array[j]) {
				temp= array[x];			//reassign 
				array[x] = array[j];
				array[j] = temp;	
			}
		selection_sort(array, x, j+1, size, 0);		//recursive call with new parameters
		}
	selection_sort(array, x+1, 0, size, 1);			//recursive call with new parameters
}

			
}//end of selection sort

void series(void) {

	printf("\n");		//just a new line
	printf("Summing the factorial series.\n");	
	int total, counter, sum;	//setting up variables
	counter = 1;
	while(counter<= 5) {		//because we are summing 1-5
		sum = factorial(counter)/counter;	//n!/n
		total += sum;				//so we can keep a rolling total
		counter ++;				//advance counter through to eventually get to 5
	}
	printf("The sum of the series is : %d\n", total);
	
}	

int factorial(int series) {
	
	if(series<= 1)				//because you dont want to multiply by 0
	  return 1;
	else 
	    return (series * factorial(series-1)) ;	// recursively keep calling for each number

}//end of factorial function
