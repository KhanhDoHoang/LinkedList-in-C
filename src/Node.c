//#include<stdio.h>
//#include<stdlib.h>
//#include "Node.h"
//
///*
// * Node.h
// */
//
//#ifndef NODE_H_
//#define NODE_H_
//
////student
//typedef struct {
//	char *firstName;
//	char *lastName;
//} student_t;
//
////node
////data store info
////nextNode holds the address of next node
//typedef struct {
//	student_t *data;
//	struct node_t *nextNode;
//} node_t;
///*
// Adds a new node to the end of the list
// */
////void addToEnd(node_t **head, student_t *student);
//void addToEnd(node_t **head, student_t *student){
//	//allocate
//	node_t *newNode = (node_t*)malloc(sizeof(node_t));
//
//	node_t *last = *head;
//	//put in data
//	newNode->data = student;
//	//this new node is going to be the last node
//	//so make next NULL
//	newNode->nextNode = NULL;
//	//if linklist is empty. then make new node as head
//	if(*head == NULL){
//		*head = newNode;
//		return;
//	}
//	//traverse till the last node
//	while(last->nextNode != NULL){
//		last = last->nextNode;
//	}
//	//change the next of the last node
//	last->nextNode = newNode;
//	return;
//}
///*
// Adds a new node to the beginning of the list
// */
////void addToStart(node_t **head, student_t *student);
//void addToStart(node_t **head, student_t *student){
//	//allocate node
//	node_t *newNode = (node_t*)malloc(sizeof(node_t));
//	//put in data
//	newNode->data = student;
//	//make next of new node as head
//	newNode->nextNode = (*head);
//	//move the head to point to new node
//	(*head) = newNode;
//}
///*
// Prints all student names in the following format: lastName, firstName
// */
//void printList(node_t *head);
//void printList(node_t *head){
//	node_t* temp;
//	temp = head;
//	while(temp != NULL){
//		printf("%s, %s\n", temp->data->lastName, temp->data->firstName);
//		temp = temp->nextNode;
//	}
//}
///*
// Removes a node by index
// */
////void removeByIndex(node_t **head, int n);
//void removeByIndex(node_t **head, int n){
//	node_t *temp = *head;
//	node_t *prev;
//
//	if(temp == NULL){
//		return;
//	}
//	if(n == 1){
//		*head = temp->nextNode;
//		free(temp);
//		return;
//	}
//	for(int i = 1; i != n; i++){
//		prev = temp;
//		temp = temp->nextNode;
//	}
//
//	if(temp == NULL){
//		printf("\nData not present!\n");
//		return;
//	} else {
//		prev->nextNode = temp->nextNode;
//		free(temp);
//	}
//}
//
///*
// Removes the last node in the list
// */
////void removeLast(node_t **head);
//void removeLast(node_t **head){
//	node_t *toDelete, *secondLast;
//	if(head == NULL){
//		return;
//	} else {
//		toDelete = *head;
//		secondLast = *head;
//
//		while(toDelete->nextNode != NULL){
//			secondLast = toDelete;
//			toDelete = toDelete->nextNode;
//		}
//
//		if(toDelete == *head){
//			*head = NULL;
//		} else {
//			secondLast->nextNode = NULL;
//		}
//		free(toDelete);
//	}
//
//
//}
///*
// Remove the first node in the list
// */
////void removeFromStart(node_t **head);
//void removeFromStart(node_t **head){
//	if (head == NULL) return;
//
//	node_t* temp = *head;
//	*head = temp->nextNode;
//	free(temp);
//}
//#endif /* NODE_H_ */
