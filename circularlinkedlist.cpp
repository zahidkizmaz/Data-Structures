#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	node * next;
};

typedef node n;

void printList(n *rootElement){
	n* iter = rootElement;
	do{
		printf("%d \n",iter->data);
		iter = iter->next;
	}
	while(iter != rootElement);

}

n* createLinkedList(int data){
	n* element;
	element = (n *) malloc(sizeof(n));
	element->next= element;
	element->data= data;
	return element;
}

void add(n *root, int data){
	n* iter = root;
	while(iter->next != root){
		iter = iter->next;
	}
	iter->next = (n *)malloc(sizeof(n));
	iter = iter->next;
	iter->data = data;
	iter->next = root;
}

n* remove(n* root,int data){
	n* iter = root;
	if(data == iter->data){
		n* temp = iter;
		while(temp->next != root){
			temp=temp->next;
		}
		temp->next=root->next;
	       	free(root);	
		return temp->next;
	}
	else{
		while(iter->next != root){
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
	n* iter = root;
	if(iter->data == data)
		return iter;
	iter = iter->next; 
	while(iter != root){
		if(iter->data == data){
			return iter;
		}
		iter=iter->next;
	}
	printf("Couldnt find the data you wanted!\n");
	return NULL;
}

int main(){

	n * root = createLinkedList(1);
	add(root, 2);
	add(root, 3);
	add(root, 4);
	add(root, 5);
	printList(root);
	root = remove(root, 3);
	printf("\n");
	printList(root);
	printf("\n%d\n",search(root,5)->next->data);
	return 0;
}
