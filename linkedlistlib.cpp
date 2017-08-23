#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

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

n* remove(n* root,int data){
	n* iter = root;
	if(data == iter->data){
		n* temp = iter;
		iter = iter->next;
	       	free(temp);
		return iter;
	}
	else{
		while(iter->next != NULL){
			if(iter->next->data == data){
				n* temp = iter->next;
				iter->next = temp->next;
				free(temp);
				return root;
			}
			iter = iter->next;
		}
	}
	printf("Couldnt find the data you wanted to remove!\n");
	return root;
}

n* search(n* root, int data){
	while(root->next != NULL){
		if(root->data == data){
			return root;
		}
		root=root->next;
	}
	return NULL;
}
