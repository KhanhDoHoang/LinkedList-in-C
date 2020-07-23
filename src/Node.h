/*
 * Node.h
 */



typedef struct {
	char *firstName;
	char *lastName;
} student_t;

typedef struct {
	student_t *data;
	struct node_t *next;
} node_t;

#ifndef NODE_H_
#define NODE_H_

/*
 Adds a new node to the end of the list
 */
void addToEnd(node_t **head, student_t *student);

/*
 Adds a new node to the beginning of the list
 */
void addToStart(node_t **head, student_t *student);

/*
 Prints all student names in the following format: lastName, firstName
 */
void printList(node_t *head);

/*
 Removes a node by index
 */
void removeByIndex(node_t **head, int n);

/*
 Removes the last node in the list
 */
void removeLast(node_t **head);

/*
 Remove the first node in the list
 */
void removeFromStart(node_t **head);

#endif /* NODE_H_ */
