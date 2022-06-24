#include <iostream>
#include <cstring>
using namespace std;
int map[50][50];
int visited[50][50];
//우, 하, 좌, 상, 우상, 우하, 좌상, 좌하  
int dx[8]={1,0,-1,0,1,1,-1,-1};
int dy[8]={0,1,0,-1,-1,1,-1,1};
int w, h, cnt=0;

void DFS(int y, int x){
	visited[y][x]=1; //방문처리 
	//해당 위치의 주변을 확인
	for(int i=0; i<8; i++){
		int yy=y+dy[i];
		int xx=x+dx[i];
		if(0<=xx&&0<=yy&&xx<w&&yy<h){
			if(map[yy][xx]==1&&!visited[yy][xx]){
				visited[yy][xx]=1;
				DFS(yy,xx); 
			}
		}
	} 
}

int main(){
	while(1){
		cin>>w>>h;
		if(w==0&&h==0) return 0; 
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				cin>>map[i][j]; 
			}
		}
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				if(map[i][j]==1&&!visited[i][j]){
					cnt++;
					DFS(i,j);
				}
			}
		}
		cout<<cnt<<"\n"; 
		
		/*맵 및 방문기록, 섬의 개수 초기화*/
		memset(map, false, sizeof(map));
		memset(visited, false, sizeof(visited));
		cnt=0;
	}
	return 0;
}