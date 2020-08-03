#include<iostream.h>

struct Node{
	int data;
	Node *next;
};

class Chaining{
	void Insert(Node *H[], int key);
	int hash(int key);
}


int Chaining::hash(int key){
	return key%10;
}

void Chaining::Insert(Node *H[], int key){
	int index =hash(key);
	SortedInsert(&H[index], key); 	// Inserting in linked list
}

int main(){
	Node *HT[10], *temp;
	int i;

	for (i = 0; i<10; i++)
		HT[i] = NULL;
	obj = Chaining();

	obj.Insert(HT, 12);
	obj.Insert(HT, 33);
	obj.Insert(HT, 5);
	obj.Insert(HT, 65);

	temp = Search(HT[hash(key)], key);		// Linked list search

}