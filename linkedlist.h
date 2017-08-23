#ifndef linkedlistlib
#define linkedlistlib
struct node{
	int data;
	node * next;
};
typedef node n;
void printList(n *rootElement);
n* createLinkedList(int data);
void add(n *element, int data);
n* remove(n* root,int data);
n* search(n* root, int data);

#endif
