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

	n * root;
	root = (n *) malloc(sizeof(n)); 
	root -> data = 1;
	root->next =NULL;	
	n* iter;
	iter = root;
	
	add(root, 2);
	add(root, 3);
	add(root, 4);
	add(root, 5);

	printList(root);
	return 0;
}
