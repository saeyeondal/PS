#include <iostream>
#include <queue>
using namespace std;
int map[1001][1001];
int dis[1001][1001];
int m, n, res=-2147000000;
queue<pair<int, int> > q;
int dy[4]={-1, 1, 0, 0};
int dx[4]={0, 0, -1, 1};


int main(){
	cin>>m>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>map[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(map[i][j]==1){
				q.push(make_pair(i,j));
			}
		}
	}
	
	while(!q.empty()){
		int a=q.front().first;
		int b=q.front().second;
		q.pop(); 
		
		for(int i=0; i<4; i++){
			int yy=a+dy[i];
			int xx=b+dx[i];
			if(yy<0||xx<0||yy>=n||xx>=m) continue;
			if(map[yy][xx]==0) {
				q.push(make_pair(yy,xx));
				map[yy][xx]=1; //방문표시 + 익은것 표시 
				dis[yy][xx]=dis[a][b]+1;			
			}
		}
	}
	int flag=1; 
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(map[i][j]==0) flag=0; //안익은 토마토가 있는경우 
		}
	}
	if(flag==1){
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(res<dis[i][j]) res=dis[i][j];
			}
		}
		cout<<res<<endl;		
	}
	else cout<<"-1";
	return 0;
}