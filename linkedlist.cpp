#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	node * next;
};

typedef node n;

int main(){

	n * root;
	root = (n *) malloc(sizeof(n)); 
	root -> data = 1;
		
	n* iter;
	iter = root;

	printf("%d \n", iter->data);

	return 0;
}
