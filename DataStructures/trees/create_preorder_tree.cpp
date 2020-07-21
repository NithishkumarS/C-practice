#include <iostream>

void createPre(int Pre[], int n){
	Stack St;
	Node *t;
	int i =0;
	root = new Node;
	root->data = pre[i+1];
	root->left = root->right = NULL;

	p=root;
	while(i< n){
		if(Pre[i] < p->data){
			t = new Node;
			t->data = Pre[i++];
			t->left = t->right = NULL;
			p->left = t;
			St.push(p);
			p = t;
		}
		else if(Pre[i] > p->data){
			if(Pre[i] < stackTop()->data){
			t = new Node;
			t->data = Pre[i++];
			t->left = t->right = NULL;
			p->right = t;
			p = t;
			}
			else{
				p = St.pop();
			}
		}
	}
}