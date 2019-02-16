
		//name: 	Baylee Quisenberry
		//section:	L502
		//purpose:	Learn how to use structs in our program


#include <stdio.h>
#include <string.h>


struct record {
	int rollNo;
	char firstName[15];
	char lastName[15];
	char faculty[15];
	char address[50];
	int phone;
};


struct student{				//for students
	char name[30];			
	int rollNum;
	int sub[3];			//only 3 subjects
};

void printstruct(struct record rec);
void studentstruct(); //AND THIS

int main() {


	struct record newrec;		//init new structure from record

	printf("Roll No: ");
	scanf("%d", &newrec.rollNo);	//gather roll num and place in newrec

	fpurge(stdin);			//clear buffer
	printf("First Name: ");
	fgets(newrec.firstName, 15, stdin);	//gather first name and place in newrec

	printf("Last Name: ");
	fgets(newrec.lastName, 15, stdin);	//gather last name and place in newrec

	printf("Faculty: ");
	fgets(newrec.faculty, 15, stdin);	//gather faculty and place in new rec

	printf("Address: ");
	fgets(newrec.address, 50, stdin);	//gather address and place n new rec

	printf("Phone Number: ");
	scanf("%d", &newrec.phone);		//gather phone num and place in new rec
	printf("\n************************************\n");

	printstruct(newrec);		//call printstruc function
	
	struct student newstu;		//init new structure from student

	studentstruct();		//call student struct function

}//end of main


void printstruct(struct record rec) {
	printf("Roll No: %d", rec.rollNo);		//print each element of the structure
	printf("\n");
	printf("First Name: %s", rec.firstName);
	printf("Last Name: %s", rec.lastName);
	printf("Faculty: %s", rec.faculty);
	printf("Address: %s", rec.address);
	printf("Phone Number: %d", rec.phone);

	printf("\n************************************\n");
} //end of print struct

void studentstruct() {

	struct student newstu[50];			//init new struct array from student 
	int tally[50];					//used for reassignment
	int students, total, max, temp;			//variables to be used to keep count

	printf("Enter the amount of students: ");
	scanf("%d", &students);				//gather total number of students
	
	fpurge(stdin);					//clear buffer
	int i;
	
	for( i = 0; i< students ; i++) {		//for all students
		printf("Enter student name and roll number for student %d : ", i); 	//ask for name and roll num
		scanf("%s", &newstu[i].name);
		scanf("%d", &newstu[i].rollNum);	
	}
	
	for(i = 0; i < students; i++) {				//for all students
		for(int j = 0; j<=2; j++) {			//for the 3 subjects
			printf("Enter marks for student %d and subject %d: ", i, j);		//enter marks
			scanf("%d", &newstu[i].sub[j]);					//gather marks in sub
		}
	}	

	for(i = 0; i < students; i++) {				//for all students
		total = 0;					//used to keep total points
		for(int j = 0; j<= 2; j++) {			//for 3 subjects
			total += newstu[i].sub[j];		//keep rolling total 
		}
		printf("\nTotal marks by student %s are : %d ", newstu[i].name, total); //print total
		tally[i] = total;				//reassign total
	}

	for(int j = 0; j <= 2; j++) {			//for 3 subjects
		max = 0;
		for(i = 0; i < students; i++) {		//for all students
			if(max < newstu[i].sub[j]) {	//if max is less than
				max = newstu[i].sub[j];		//reassign
				temp = i;			
			}
		}
		printf("\nStudent %s got maximum marks = %d in subject: %d", newstu[temp].name, max, j);
	}

	max = 0;				//set to 0
	for( i = 0; i < students; i++) {	//for all students
		if(max < tally[i]) {		//if max is smaller
			max = tally[i];		//reassign
			temp = i;	
		}
	}
	
	printf("\n%s obtained the total highest marks.", newstu[temp].name);	


}//end of student
