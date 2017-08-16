#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	node * next;
};

typedef node n;

void printList(n *rootElement){
	while(rootElement != NULL){
		printf("%d \n",rootElement->data);
		rootElement = rootElement->next;
	}
}

n* createLinkedList(int data){
	n* element;
	element = (n *) malloc(sizeof(n));
	element->next= NULL;
	element->data= data;
	return element;
}

void add(n *element, int data){
	while(element->next != NULL){
		element = element->next;
	}
	element->next = (n *)malloc(sizeof(n));
	element = element->next;
	element->data = data;
	element->next = NULL;
}

int main(){

	n * root = createLinkedList(1);
	add(root, 2);
	add(root, 3);
	add(root, 4);
	add(root, 5);
	printList(root);
	return 0;
}
