#include<stdio.h>
#include<stdlib.h>

struct node{
	int value;
	node * left;
	node * right;	
};
typedef node n;

void printTree(n * r){
	if(r == NULL){
		return;
	}else{
		printTree(r->left);
		printf("%d ", r->value);
		printTree(r->right);
	}
		

}

n* add(n * root, int value){
	if(root == NULL){
		root = (n * )malloc(sizeof(n));
		root->value = value;
		root->left = NULL;
		root->right = NULL;
		return root;
	}else{
		if(value < root->value){
			root->left = add(root->left, value);
			return root;
		}else if(value > root->value){
			root->right = add(root->right, value);
			return root;
		}
	}
}

int main(){
	n * root = NULL;
	root = add(root, 24);
	root = add(root, 11);
	root = add(root, 15);
	root = add(root, 17);
	root = add(root, 1);
	root = add(root, 4);
	root = add(root, 30);
	root = add(root, 50);
	root = add(root, 60);
	root = add(root, 88);
	printTree(root);

	return 0;
}
