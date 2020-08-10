#include<iostream>

class DFS{
	int A[7][7];
	int visited[7];
public:
	void traversal(int start);

}

void DFS::traversal(int i){

	if(visited[u]==0){
		visited[u] = 1;
		for(int v=1; v<=n; v++){
			if(A[u][v] == 1 && visited[v] != 1)
				DFS(v);
		}
	}

}