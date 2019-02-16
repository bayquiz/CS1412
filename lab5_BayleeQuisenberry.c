#include <stdio.h>
//	Name:		Baylee Quisenberry
//	Section:	CS1412 L502
//	Purpose:	This program demonstrates our 
//			ability to correctly use arrays
//

int sort_array();
int two_sum();
int reverse_sentence();

int main(void) {

	sort_array();	//calling sort array function
	two_sum();	//calling two sum function
	reverse_sentence(); //calling reverse sentence function

} //end main function

int sort_array(void) {
	
	int i, n, j, x;		//array values from user
	printf("Please enter n: "); 	//asking for n
	scanf("%d", &n);		//collected n
	
//declaring array
	
	int a[n];	
	printf("Enter %d numbers: \n", n); //enter elements 
	//scanf("%d", &n);		//collect elements
	for(i = 0; i <n; ++i) {
		scanf("%d", &a[i]);
	} //end of foor loop. array is created.

//now sort the array

	for(i = 0; i < n; ++i) {	//for length of array
	  for( j = i+1; j <= n; ++j) {	//starting at 2nd element
	    if(a[i] > a[j]) {		//if a0 > a1
	      x = a[i];			//x = bigger
	      a[i] = a[j];		//shifting array
	      a[j] = x;			//now redo
	    } 	//end of if
	  } 	//end of 2nd for loop
	}	//end of 1st for loop

	printf("the new array in ascending order is :\n");
	for(i = 1; i<= n; i++) {	//for length of array
	  printf("%d\n", a[i]);		//print
	} //end of for loop

} //end of sort array function


int two_sum(void) {

	int i,target, n, j;
	printf("Please enter n: \n"); //length of array
	scanf("%d", &n); 	//collected n

	//printf("Please enter target sum: \n");
	//scanf("%d", &target);	//collected target

//declaring array

	int arr[n];
	int results[n];
	printf("Enter %d numbers: \n", n); //enter elements
	for(i = 0; i < n; ++i)
	  scanf("%d", &arr[i]);
	//array is created 
	//collecting target sum value
	printf("Please enter a target sum: \n");
	scanf("%d", &target); //got target from user
	
	for( i=0; i < n; ++i) { 	//for length of array. start at 1st element
	  for(j = i+1; j < n; ++j) {	//for length of array starting at 2nd element
	    if(arr[i] + arr[j] == target) {	//if 1st + 2nd element = target
		printf("the target index is a[%d] = %d",i , arr[i]);
		printf(" and b[%d] = %d\n", j, arr[j]);	
	    } //end of if
	  } //end of 2nd for loop
	}//end of first for loop
   

} //end of two_sum function

int reverse_sentence(void) {
	
//	int c, n, i
//	char string [100]; 		//creating char array to hold sentence
//GONNA TRY TO COMMENT THIS STUFF OUT	
/*

	printf("Enter a sentence: \n");
	//for(int i = 0; i < sizeof(string)-1 && ((c = getchar()) != EOF && c != '\n');) 
	
	while((string[i++] = getchar()) != '\n' )
		;
		//string[i++] = c;
	string[i] = '\0';
	i = 0;
	//for(i = 0; i< n; i++)
	while(string[i] != '\0')
		printf("%c", string[i++]);
	//putchar('\n');
	//return 0;
	printf("now testing reverse part\n");
	
*/
//	printf("\0");		//trying to clear
	char string [100];	//will hold the sentence
	char end = '\0';	//to see if we find terminating character	
	int ch;			//used for get char
	int i = 0;
	ch = getchar();		//HAVE to have this to eat the new line character after my previous function

	printf("Enter a sentence: \n");	
	while( (ch=getchar()) != '\n' )				//while there are still chars to gather
		if(ch == '.' || ch == '?' || ch == '!')		//if there is a ., ?, or !
		{
			end = ch;				//the punctuation is now the end
		}
		else {
			string[i] = ch;				//otherwise continue getting chars
			i++;	}				//keep iterating through 
		string[i] = '\0';				//set the end


	int w = 14;				//used for word
	char word[15] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0','\0','\0'};
	//setting limit to 15 letters per word
	int x;						//used for the sentence


	for ( x =i; x >= 0; x--)			//starting at the end of the array... to the beginning
		if(string[x] == ' ') {			//if there is a space
			printf(" ");			//print the space	

			for(int i = 0; i<15; i++)	//print up to 10 letters in each word	
			  printf("%c", word[i]);	//print mini array (our word)
			w = 14;			

			for(int i = 0; i < 15; i++)	//for the length of word array	
			  word[i] = '\0'; 	}	//fill it w null
		else	{				//if there isn't a space
			word[w] = string[x];		//letter in sentence = letter in word
			w--;	}			//assigned word from sentence into word array. then decrement w

	printf(" ");							
	for(i = 0; i < 15; i++)				//now print the word array
		printf("%c", word[i]);
	
	
	if (end != '\0')				//if there is a punctuation 
		printf("%c", end);			//print it

		printf("\n");
		printf("\n");
	return 0;
} //end of reverse sentence function










