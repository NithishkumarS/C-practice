#include <iostream>

#define SIZE = 10;
class LinearProbing{

	int H[10];

public:

	void Insert(int H[], int key);
	int hash(int key);
	int probe(int H[], int key);
}


int LinearProbing::probe(int H[], int key){
	int index = hash(key);
	int i =0;
	while(H[(index+i) % SIZE] != 0) 
		i++;
	return (index+i)%SIZE;
}

int LinearProbing::hash(){
	int index = hash(key);

	if(H[index] !=0){
		index = probe(H, key);
	}
	return index;
}

void LinearProbing::Insert(int H[], int key) {
	int index = hash(key);
	H[index] = key;

}

int LinearProbing::Search(int H[], int key){
	int index = hash(key);

	int i =0;
	 while(H[(index+i)%SIZE] != key)
	 	i++;
	 return (index+i)%SIZE;
}

int main(){


}