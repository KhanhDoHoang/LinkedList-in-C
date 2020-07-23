/*
* Title:  Assignment 2 -Student Registration System
*                        w/ Linked List, Ansi-sytle
* Course: CST8234 -C Language
* Term:   Summer 2020
*
* Team:
* 	Student #1: <<< Peter Mitchell (mitc0327) >>>
* 	Student #2: <<< firstnamelastname(ACuserID) >>>
*
*	Status:
*		Requirement #1:  {complete xor incomplete}
*		Requirement #2:  {complete xor incomplete}
*		Requirement #3:  {complete xor incomplete}
*		Requirement #4:  {complete xor incomplete}
*		Requirement #5:  {complete xor incomplete}
*		Requirement #6:  {complete xor incomplete}
*		Requirement #7:  {complete xor incomplete}
*		Requirement #8:  {complete xor incomplete}
*		Requirement #9:  {complete xor incomplete}
*		Requirement #10: {complete xor incomplete}
*		Requirement #11: {complete xor incomplete}
*/

#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
#include <string.h>

char* getString(char *printString);

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);

	node_t *head = NULL;
	student_t students[6];

	char tempStr[75];

	printf("First, you will enter 3 students names that will be added to start of the list\n");
	for (int i = 0; i < 3; i++)
	{
		sprintf(tempStr, "Please enter first name for student %d: ",(i+1));
		students[i].firstName = getString(tempStr);

		sprintf(tempStr, "Please enter last name for student %d: ",(i+1));
		students[i].lastName = getString(tempStr);

		addToStart(&head, &students[i]);
	}

	printList(head);

	printf("Then, you will enter 3 students names that will be added to the end of the list\n");
	for (int i = 0; i < 3; i++) {
		sprintf(tempStr, "Please enter first name for student %d: ",(i+1));
		students[i+3].firstName = getString(tempStr);

		sprintf(tempStr, "Please enter last name for student %d: ",(i+1));
		students[i+3].lastName = getString(tempStr);

		addToEnd(&head, &students[i+3]);
	}

	printList(head);

	printf("Then, you will remove the first 3 students in the list\n");
	for (int i = 0; i < 3; i++) {
		removeFromStart(&head);
	}

	printList(head);

	printf("Then, you will remove the last 3 students in the list\n");
	for (int i = 0; i < 3; i++) {
		removeLast(&head);
	}

	printList(head); //empty

	printf("By now, your list should be empty, so you will enter 3 more students\n");
	for (int i = 0; i < 3; i++) {
		sprintf(tempStr, "Please enter first name for student %d: ",(i+1));
		students[i].firstName = getString(tempStr);

		sprintf(tempStr, "Please enter last name for student %d: ",(i+1));
		students[i].lastName = getString(tempStr);

		addToEnd(&head, &students[i]);
	}

	printList(head);

	printf("Finally, you will delete the second student in the list only\n");
	removeByIndex(&head,2); //second index

	printList(head);

	for (int i = 0; i < 6; i++) {
		free(students[i].firstName);
		free(students[i].lastName);
	}

	return EXIT_SUCCESS;
}

char* getString(char *printString) {
	char *returnString = malloc(sizeof(char)*100); //is shortened
	if (returnString == NULL) {
		perror("Error: could not find space for malloc.\n");
		return NULL;
	}
	printf(printString);
	scanf("%s", returnString);

	returnString = realloc(returnString, sizeof(char)*(strlen(returnString)+1));
	return returnString;
}


