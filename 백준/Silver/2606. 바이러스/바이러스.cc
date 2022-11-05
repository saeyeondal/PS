#include <iostream>
#include <queue>
using namespace std;
int map[101][101];
int visited[101]={0,};
int com, link, cnt=0;
queue<int> q;
	
void BFS(int v){
	q.push(v);
	visited[v]=1;
	while(!q.empty()){
		int x=q.front();
		q.pop();	
		for(int i=1; i<=com; i++){
			if(map[x][i]==1 && visited[i]==0){
				q.push(i);
				cnt++;
				visited[i]=1;
			}
		}	
	}
}

int main(){
	cin>>com>>link;	
	for(int i=0; i<link; i++){
		int a, b;
		cin>>a>>b;
		map[a][b]=1;
		map[b][a]=1;
	}
	BFS(1);
	cout<<cnt;
	return 0;
}