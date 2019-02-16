#include <stdio.h>
//	Name: 		Baylee Quisenberry
//	Section:	CS 1412 L502
//	Purpose:	This program is about learning
//			how to properly use selection statements
//			and loops.
//
int digits(); 
int compare();
int grade();

//starting main function
int main(void) {
	digits(); // calling digits function
	compare(); //calling compare function
	grade(); // calling grade function

} //end of main function

int digits(void) {
	int number; //number the user will input
	int digit;  // number of digits
	printf("Please enter a number\n");
	scanf("%d" , &number);

	//now finding number of digits in the number
	while(number != 0) {
		number /=10 ;
		digit++; } //end of while loop

	printf("The number of digits is %d\n" ,digit);
} //end of digits function

int compare(void) {
	int a, b, c, d; //four numbers from the user
	int max, min; //setting up comparison

	printf("Please enter four integers\n");
	scanf("%d%d%d%d%", &a, &b, &c, &d);

	//find largest of a and b
	max = (a > b ? a : b); // if yes a, if no , b
	//now c and d and then comparing to a or b
	max = ( c > d ? (c > max ? c : max) : (d > max ? d : max));
	
	//doing the same thing for the min value
	min = (a < b ? a : b); // if smaller, a. if not, b
	//now repeating for c and d and them comparing to min of a or b
	min = (c < d ? ( c < min ? c : min) :(d < min ? d : max));

	printf("%d is the smallest. %d is the largest\n", min, max);

} //end of compare function

int grade(void) {
	int grade; //numerical grade from user
	printf("Please enter a numerical grade\n");
	scanf("%d", &grade);

	//testing bad cases
	if (grade > 100 || grade < 0) {
		printf("You entered an invalid grade\n"); }
		//goto done; }

	grade = grade / 10;
	//starting swtich
	switch (grade) {
		
	case 10: printf("Your grade is an A\n");
		break;
	case 9: printf("Your grade is an A\n");
		break;
	case 8: printf("Your grade is a B\n");
		break;
	case 7: printf("Your grade is a C\n");
		break;
	case 6: printf("Your grade is a D\n");
		break;
	case 5: case 4: case 3: case 2: case 1: case 0: 
		printf("Your grade is an F\n");
		break;
	} //end of switch
//	done: exit;
	
} //end of grade function

		
