#include <iostream>  
#include <queue>
using namespace std;
int map[101][101]; //각 노드가 연결된 정보를 이차원 배열로 표현  
int visited[101];
int depth[101];
int n, m, a, b, cnt=0; 
queue<int> q;

void BFS(int v){
	q.push(v);
	visited[v]=1; //현재 노드 방문 처리 
	while(!q.empty()){
		v=q.front();
		q.pop();
		
		for(int i=1; i<=n; i++){
			if(map[v][i]==1&&visited[i]==0){
				q.push(i);
				visited[i]=1; 
				depth[i]=depth[v]+1;
			}
		}
	} 
}

int main(){
	cin>>n;
	cin>>a>>b;
	cin>>m;
	for(int i=1; i<=m; i++){
		int u, v;
		cin>>u>>v;
		//연결 정보를 이차원 배열로 표현 
		map[u][v]=1;
		map[v][u]=1; 
	}
	BFS(a);
	if(depth[b]==0) cout<<"-1";
	else cout<<depth[b];
	return 0;
}