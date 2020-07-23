#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
/*
 Adds a new node to the end of the list
 */
void addToEnd(node_t **head, student_t *student) {
	//allocate
	node_t *newNode = (node_t*) malloc(sizeof(node_t));

	node_t *last = *head;

	newNode->data = student;

	//so make next NULL
	newNode->next = NULL;

	//if linklist is empty. then make new node as head
	if(*head == NULL){
		*head = newNode;
		return;
	}
	//traverse till the last node
	while(last->next != NULL){
		last = (node_t*) last->next;
	}
	//change the next of the last node
	last->next = newNode;
	return;
}

/*
 Adds a new node to the beginning of the list
 */
void addToStart(node_t **head, student_t *student) {
	node_t* newHead = (node_t*) malloc(sizeof(node_t));

	newHead->data = student;

	newHead->next = *head;

	*head = newHead;
}

/*
 Prints all student names in the following format: lastName, firstName
 */
void printList(node_t *head) {
	node_t* onHead = head;
	while (onHead != NULL) { //&& head->nextNode != NULL && onHead->data != NULL
		printf("%s, %s\n",onHead->data->lastName,onHead->data->firstName);
		onHead = (node_t*) onHead->next;
	}
}

/*
 Removes a node by index
 */
void removeByIndex(node_t **head, int n) {
	node_t *temp = *head;
	node_t *prev;

	if(temp == NULL){
		return;
	}
	if(n == 1){
		*head = (node_t*) temp->next;
		free(temp);
		return;
	}
	for(int i = 1; i != n; i++){
		prev = temp;
		temp = (node_t*) temp->next;
	}

	if(temp == NULL){
		printf("\nData not present!\n");
		return;
	} else {
		prev->next = temp->next;
		free(temp);
	}
}

/*
 Removes the last node in the list
 */
void removeLast(node_t **head) {
	if (head == NULL) return;

	node_t *toDelete = *head;
	node_t *secondLast = *head;

	while(toDelete->next != NULL){
		secondLast = toDelete;
		toDelete = (node_t*) toDelete->next;
	}

	if (toDelete == *head) {
		*head = NULL;
	} else {
		secondLast->next = NULL;
	}

	free(toDelete);
}

/*
 Remove the first node in the list
 */
void removeFromStart(node_t **head) {
	if (head == NULL) return;

	node_t* temp = *head;
	*head = (node_t*) temp->next;
	free(temp);
}



