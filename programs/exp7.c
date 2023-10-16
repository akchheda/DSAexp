#include<stdio.h>
#include<stdlib.h>

/*
int source ,V , E,time,visited[20], G[20][20];
void DFS(int i){
	int j;
	visited [i] = 1;
	printf("%d ->" , i+1);
	for(int j = 0; j<V; j++){
		if(G[i][j] == 1&&visited[j]==0){
			DFS(j);
		}
	}
}

int main(){
	int i , j , v1 , v2;
	printf("Graphs\n");
	printf("Enter the number of edges\n");
	scanf("%d" , &E);
	printf("Enter the number of vertices\n");
	scanf("%d" , &V);
	for(i = 0 ; i< V;i++){
		for(j = 0 ; j < V ; j++){
			G[i][j] = 0;
		}
	}
	for(i = 0 ; i< E ; i++){
		printf("Enter the edges(format : V1 V2) : ");
		scanf("%d%d", &v1 ,&v2);
		G[v1-1][v2-1] = 1;
	}
	for(i = 0 ; i< V;i++){
		for(j = 0 ; j < V ; j++){
			printf("%d" , G[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/


int a[20][20],q[20],visited[20],n,f=-1,r=-1;
void bfs(int v){
	int i;
	for(i=0;i<n;i++){
		if(a[v][i] !=0 && visited[i]==0){
		r=r+1;
		q[r]=i;
		visited[i]=1;
		printf("%d",i);
		}
	}
	f=f+1;
	if(f<=r)
		bfs(q[f]);
	}
	int main(){
	int v,i,j;	
	printf("\nEnter number of vertices");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	visited[i]=0;}
	printf("\nEnter graph data in matric from\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	printf("\nEnter the starting vertex");
	scanf("%d",&v);
	f=r=0;
	q[r]=v;
	visited[v]=1;
	printf("%d",v);
	bfs(v);
	if(r!=n-1)
	printf("\nBFS not possible");
	printf("\n");
	return 0;
}
