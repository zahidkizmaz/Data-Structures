#include<stdio.h>
#include<stdlib.h>
#include "linkedlist.h"


int main(){

	n * root = createLinkedList(1);
	add(root, 2);
	add(root, 3);
	add(root, 4);
	add(root, 5);
	printList(root);
	printf("\n");
	root = remove(root,1);
	printList(root);
	root = remove(root,7);
	printf("\n%d\n",search(root,3)->data);

	return 0;
}
