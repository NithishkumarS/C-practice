#include <iostream>

#define I = 34567;
int near[8] = {I,I,I,I,I,I,I,I};
int t[2][7];

int main(){
	int i,j,k,u,v,n=7, min = I;
	for (i =1; i<=n; i++){
		for(j = i; i<=n;j++){
			if(cost[i][j] < min){
				min = cost[i][j];
				u =i; v=j;
			}
		}
	}
	t[0][0] = u; t[1][0] = v;
	near[u]=near[v]=0;

	for(i=1; i<=n; i++){
		if(cost[i][u] < cost[i][v])
			near[i] = u;
		else 
			near[i] = v;
	}
	for(i =1; i<n-1; i++){
		for(j =1;j<=n; j++){
			min = I;
			if(near[j] != 0 && cost[j][near[j]] < min){
				k=j;
				min =cost[j][near[j]]; 
			}
		}
		t[0][i] = k;
		t[1][i] = near[k];
		near[k] = 0;

		for(j=1; j<=n; j++) {
			if(near[j]!=0 && cost[j][k] < cost[j][near[j]])
				near[j] = k;
		}

	}

	for(i =0;i<n-1; i++){
		cout<<t[0][i]<<", "<<t[1][i]<<endl;
	}
}