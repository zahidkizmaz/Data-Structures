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

int main(){

	n * root;
	root = (n *) malloc(sizeof(n)); 
	root -> data = 1;
	root->next =NULL;	
	n* iter;
	iter = root;

	int i = 0;
	for(i=0;i<5;i++){
		iter->next = (n * )malloc(sizeof(n));
		iter = iter->next;
		iter->next = NULL;
		iter->data =i;
	}

	printList(root);
	return 0;
}
