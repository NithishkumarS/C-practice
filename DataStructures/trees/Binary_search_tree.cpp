#include<iostream>

class Node{
	Node *left;
	int data;
	Node *right;
} 

class BST{
	Node *root=NULL;

	public:
		void Insert(int key);
		void Inorder(Node *p);
		Node * Search(int key);
		Node * Delete(int key);
		void RInsert(int key);
		int Height(Node *p);
		Node * InSucc(Node *p);
		Node * InPre(Node *p);
}

Node * BST::Search(int key){
	Node *t = root;
	while(t != NULL){
		if(key == t->data)
			return t;
		else if(key < t->data)
			t = t->left;
		else
			t = t->right;
	}
	return NULL;
}

void BST::Inorder(Node *p){
	if(p){
		Inorder(p->left);
		cout<<P->data;
		Inorder(p->right);
	}
}

void BST::Insert(int key){
	Node *t = root;
	Node *r, *p;
	if(root == NULL){
		p = new Node(key);
		p->left = p->right = NULL;
		root = p;
		return;
	}
	while(t!=NULL){
		r = t;
		if(key< t->data )
			t = t->left;
		else if (key> t->data)
			t = t->right;
		else 
			return;
	}

	p = new Node(key);
	p->left = p->right = NULL;

	if(key <r->data)
		r->left = p;
	else r->right = p;
}

int BST::Height(Node *p) {
    int x,y;
    if(p==NULL) return 0;

    x = Height(p->left);
    y = Height(p->right);
    if(x > y) return x+1;

    else return y+1; 
}

Node * BST::InPre(Node *p){
	while(p && p->right != NULL) 
		p=p->right;

	return p;
}

Node * BST::InSucc(Node *p){
	while(p && p->left !-NULL)
		p = P->left;
	return p;
}

Node * BST::Delete(Node *p, int key){
	Node *q;
	if(p ==NULL) return NULL;

	if(p->left == NULL && p->right ==NULL) {
		if(p == root)
			root == NULL;
		return NULL;
	}
	if(key < p->data)
		p->left = Delete(p->left, key);
	else if (key > p->data)
		p->right = Delete(p->right, key);
	else {
		if(Height(p->left) > Height(p->right)){
			q = InPre(p->left);		// FInd the inorder predecessor to replacw with
			p->data = q->data;
			p->left = Delete(p->left, q->data);
			}
		else{
			q = InPre(p->right);		// FInd the inorder predecessor to replacw with
			p->data = q->data;
			p->right = Delete(p->right, q->data);
				
			}

	 	}
}
Node *RInsert(Node *p, int key){
	if(p == NULL){
		Node *t = new Node;
		t->data = key;
		t->left=t->right = NULL;
	}
		f(key< p ->data)
		p->left = RInsert(P->left, key)
	else if(key > p ->data)
		p->right = RInsert(P->right, key)
	return p;
}
int main(){
	BST obj;
	root = 	obj.Insert(10);
	obj.Insert(5);
	obj.Insert(20);
	obj.Insert(54);
	obj.Insert(30);
	obj.Insert(45);	
	obj.Insert(50);
	obj.Insert(35);

	obj.Inorder(root)
	return 0;
}