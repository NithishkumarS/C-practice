#include <iostream>


class BFS{
	Queue q;
	vector<int> visited;
public:

}
void BFS::BFsearch(int i){

	visited[i] = 1;
	q.push(i);
	while(q.empty()){
		int u = q.pop();
		for(int v =1; v<=n; v++){
			if(A[u][v] == 1 && visited[v] ==0){
				visited[v] = 1;
				q.push(v);
			}
		}

	}
}