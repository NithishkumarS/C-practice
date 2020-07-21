#include <iostream>
#include <queue>

class Node{
	Node *lchild;
	int data;
	Node *rchild;
};

class Tree{

	Node *root;
public:
	Tree(){root = NULL;}

	void create_tree();
	void Preorder(){Preorder(root);}
	void Preorder(Node *p);
	void Postorder(Node *p);
	void Inorder(Node *p);
	void LevelOrder(Node *p);
	int Height(Node *root);
}

void LevelOrder(Node *root){
	Queue q;
	q.push(root);

	while(!isEmpty(q)){
		root = q.pop();
		cout<<root->data;
		if(root->lchild){
			cout<<root->lchild->data;
			q.push(root->lchild);
		}
		if(root->rchild){
			cout<<root->rchild->data;
			q.push(root->rchild);
		}
	}
}

int Tree::count(Node *root){
	if(root)
		return count(root->lchild)+count(root->rchild)+1;
	return 0; 
}

int Tree::Height(Node *root){
	int x=0, y=0;
	if(root==0)
		return 0;
	x = Height(root->lchild);
	y = Height(root->rchild);
	if(x>y)
		return x+1;
	else
		return y+1;
}

void Tree::create_tree() {
	Node *p, *t;
	int x;
	Queue q;
	cout<<"ENter root value";
	cin>>x;
	root = new Node;
	root->data = x;
	root->lchild = root->rchild = 0;

	q.push_back(root);

	while(!isEmpty(q)) {
	    p = q.pop();
	    cout<<"Enter the left child";
	    cin>>x;
	    if(x != -1) {
	      t = new Node;
	      t->data = x;
	      P->lchild = t;
	      q.push_back(t);
	    }

	    cout<<"Enter the right child";
	    cin>>x;
	    if(x != -1) {
	      t = new Node;
	      t->data = x;
	      P->rchild = t;
	      q.push_back(t);
	    }

	}

}

int Tree:Height(Node *root){
	int x=0, y=0;
	if(root==NULL) return 0;
	x = Height(root->lchild);
	y = Height(root->rchild);
	if(x>y)
		return x+1;
	else 
		return y+1;

}

void Tree::preorder(struct  Node *p)
{
	if(p){
		cout<<p->data;
		preorder(p->lchild);
		preorder(p->rchild);
	}
	
}

void Tree::inorder(struct  Node *p)
{
	if(p){
		preorder(p->lchild);
		cout<<p->data;
		preorder(p->rchild);
	}
	
}


void Tree::postorder(struct  Node *p)
{
	if(p){
		preorder(p->lchild);
		preorder(p->rchild);
		cout<<p->data;
	}
	
}
int main(){
	Tree t;
	t.create_tree();
	t.preorder();
	return 0;
}