#include <stdio.h>
#include <string.h>
#include <ctype.h>

char vowel_cons();		//function prototypes
char wordComp();
char dictionary();


int main(void) {

	vowel_cons();		//calling functions
	wordComp();
	dictionary();
}


char vowel_cons() {

	char str[50];			//setting array to initial large value
	printf("Enter a string: \n");
	
	fgets(str, 50, stdin);		//gather the string
	char *ptr;			//initialize pointer

	int x =0;
	while( str[x] ) {
		str[x] = tolower(str[x]);	//convert to lowercase so there is less to check
		x++;
	}

	ptr = str;				//set pointer to the string array
	
	int vowel= 0; 
	int consonant = 0;
	int end = strlen(str) -2;
	int i = 0;

	
	while(i <= end) {			//while there are still elements
	
		if(ptr[i] == 'a' || ptr[i] == 'i' || ptr[i] == 'e' || ptr[i] == 'o' || ptr[i] == 'u') {    //if index = vowel
			vowel++;		//increment vowel
			i++;			// move index along
		}
		else if(!(ptr[i] >= 'a' && ptr[i] <= 'z')) {		//if it is not a letter character (punctuation)
			i++;						// move index along
		}
		else {
			consonant++;					//if it is NOT vowel or punctuation it must be consonant
			i++;						//increment consonant and move index along
		}
	}
	printf("has  %d vowels\n", vowel);				//print the results
	printf("and %d consonants\n", consonant);

}


char wordComp() {
	
	printf("Enter a sentence: ");
	char sentence[50];				//set up larger array
	gets(sentence);			//gather the string

	char word[15][15];				//set up 2d array for the words in sentence
	
	int i = 0; 					//set up index variables
	int x = 0;
	int j = 0;
	int end = strlen(sentence) -2;

	for(i = 0; i<= end; i++)			// while there are still characters left
		if(sentence[i] == ' ' || sentence[i] == '\0') {		//if there is a space or new line
			word[x][j] = '\0';				// its nothing
			x++;						//increment index
			j = 0;
		}
		else {				
			word[x][j] = sentence[i];			//otherwise fill word with word from sentence
			j++;						//advance word index
		}


	
	char smallest[15];				//set up 2 arrays to hold value of largest and smallest
	char largest[15];
		
	for( i = 0; i <= x; i++) {			//while there are still words in word

		if(strlen(word[i]) < strlen(smallest)) {	//if word length is < smallest
			strcpy(smallest, word[i]);		// set to smallest
			
		}
		if(strlen(word[i]) > strlen( largest)) {	// if word length > largest
			strcpy(largest, word[i]);		//set to largest
			
		}

	}
	printf("Smallest word is: %s\n", smallest);		//print results
	printf("largest word is: %s\n", largest); 
	

} // end of wordcomp function


char dictionary() {

	char name[10][10];		//set up 2d array for the names
	char copy[10][10];		// 2d array to be copied
	char temp[10];			//used for reassignment 
	int n;				//counter variables
	int i = 0;
	int j = 0;

	printf("Enter n: \n");
	scanf("%d", &n);		//gather n
	
	printf("Enter %d names: \n", n);		//enter n names
	for(i = 0; i < n; i++)			
		scanf("%s", name[i]);			//put names into name array
		strcpy(copy[i], name[i]);		//copy names into copy array so we can manipulate
	
	for(i = 0; i< n-1; i++) {			//double for loop for the 2d arrays
	   for(j = i+1; j< n; j++) {
	      if(strcmp(name[i], name[j]) > 0) {	//alphabetically compares 
	         strcpy(temp, name[i]);			//if its greather then copy into temp variable
		 strcpy(name[i], name[j]);		//reassign
		 strcpy(name[j], temp);
	      }
	   }
	}

	printf("************************************\n");	//print results
	printf("Strings in dictionary order: \n");
	for(i = 0; i < n; i++)
		printf("%s\n", name[i]);



} // end of dictionary function     
	          	




	
