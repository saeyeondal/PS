#include <vector>
#include <iostream>
#include <algorithm> 
using namespace std;
const int MAX=25;

int map[MAX][MAX], visited[MAX][MAX]; 
int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, -1, 1};
int N, house_cnt=0; //지도 크기, 총 단지수
vector<int> v; //각 단지내 집의 수  
void DFS(int x, int y){
	visited[x][y]=1;	 	
	house_cnt++; 	
	
	for(int i=0; i<4; i++){
		int xx=x+dx[i];
		int yy=y+dy[i];
		if(xx>=N||xx<0||yy>=N||yy<0) continue; 
		if(map[xx][yy]==1 && visited[xx][yy]==0) {	
			DFS(xx, yy);	
		}	
	}
}

int main(){
	cin>>N;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			scanf("%1d", &map[i][j]);
		}
	} 
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(map[i][j]==1 && visited[i][j]==0){
				house_cnt=0; 
				DFS(i, j);
				v.push_back(house_cnt); 
			}
		}
	}
	sort(v.begin(), v.end()); 
	cout<<v.size()<<"\n";
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<"\n";
	}
	return 0;
}