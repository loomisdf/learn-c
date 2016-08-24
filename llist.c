#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int value;
	struct node* next;
} node;

int Length(node* head) {
	int len = 1;

	node* current = head;
	while(current->next != head) {
		current = current->next;
		len++;
	}

	return len;
}

/*
void splice(node* first, node* second) {

}
*/

void printList(node* head) {
	node* current = head;
	int len = Length(head);

	for(int i = 0; i < len; i++) {
		if(i == 0) {
			printf("[%d, ", current->value);
		}
		else if(i == len - 1) {
			printf("%d]", current->value);
		}
		else {
			printf("%d, ", current->value);
		}
		current = current->next;
	} printf("\n");
}

int main() {
	node* list1 = malloc(sizeof(node));
	node* second = malloc(sizeof(node));
	node* third = malloc(sizeof(node));

	node* fourth = malloc(sizeof(node));
	node* fifth = malloc(sizeof(node));
	node* sixth = malloc(sizeof(node));

	list1->value = 1;
	second->value = 2;
	third->value = 3;

	fourth->value = 4;
	fifth->value = 5;
	sixth->value = 6;

	list1->next = second;
	second->next = third;
	third->next = list1;

	fourth->next = fifth;
	fifth->next = sixth;
	sixth->next = fourth;

	int len = Length(list1);
	printf("Length of list: %d\n", len);

	printList(list1);
	printList(fourth);

	free(list1);
	free(second);
	free(third);

	return(0);
}
