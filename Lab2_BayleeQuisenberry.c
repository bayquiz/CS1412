#include <stdio.h>
//	Name:		Baylee Quisenberry
//	Section:	CS1412-L502
//	Purpose of the program:
//	this program serves as an example on how to gather input from 
//	the user and use it in various situations.
//
//initializing other functions

int sum();
int circle();
int ascii();
int odd();
int greater();
int job();

//starting main function
int main(void) {
	sum(); //calling sum function
	circle(); //calling circle function
	ascii(); //calling ascii function
	odd(); //calling odd function
	greater(); //calling greater function
	job(); //calling job function

} //end of function main

int sum(void) {	
	int sum1;
	int sum2; // 2 integers from the user that will be added

//starting to print
	printf("Please input 2 integers\n");
	scanf("%d%d%" , &sum1, &sum2);
//now going to add the integers
	int sum = sum1 + sum2;
	printf("The sum is %d\n",sum);
	return 0;
} //end of sum

//starting circle function
int circle(void){
	float radius; //setting up radius variable
	float pi = 3.14159; //set up pi variable

//starting print and scan
	printf("Please enter a value for radius of a circle\n");
	scanf("%f%" , &radius);
	
	float area = pi * radius; //radius * radius);
	float circumference = 2 * pi * radius;
	printf("The area is %f\n", area);
	printf("The circumference is %f\n", circumference);
	return 0;

} //end of circle function

//starting ascii function
int ascii(void){

	char c; //letter input from user
//starting print and scan 

	printf("Please enter any character\n");
	scanf(" %c%", &c);
	printf("The ascii value of %c is %d\n" , c, c);
	return 0;
} // end of ascii function

//starting odd function
int odd(void){
	int number; //number from user

	printf("Please enter a number\n");
	scanf(" %d%", &number);
//starting if function
	if (number % 2 == 0) {
		printf("The number is even\n"); } //end of if
	else {	
		printf("The number is odd\n"); } //end of else
} //end of odd function

//starting greater function

int greater(void){
	int num1;
	int num2; //numbers that will be gathered from the user
	printf("Please enter 2 numbers\n");
	scanf("%d%d%", &num1, &num2);
	
//starting if block
	if(num1 > num2) {
		printf("%d is greater\n", num1); } //end of if
	else {
		printf("%d is greater\n", num2); } //end of else
} // end of greater function

//starting job function
int job(void) {
	
	int age;
	int exper;
	int projects; //values will be gathered from the user

	printf("Enter your age, years of experience, and projects worked\n");
	scanf("%d%d%d%", &age, &exper, &projects);
//starting if block
	if(age>= 18 && exper>= 3 && projects >= 5){
		printf("Congrats! You got the job!"); } //end of if
	else {
		printf("Im sorry, you didn't get the job."); } // end of else
} // end of job function
