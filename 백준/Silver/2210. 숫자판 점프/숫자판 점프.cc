#include <iostream>
#include <queue>
#include <set>
using namespace std;
int map[6][6];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
set<int> s;

void DFS(int x, int y, int L, int num){	
	if(L==6) {
		s.insert(num);
		return;
	}
	else {	
		for(int i=0; i<4; i++){
			int xx=x+dx[i];
			int yy=y+dy[i];
			if(xx<1||yy<1||xx>5||yy>5) continue;
			DFS(xx,yy,L+1,num*10+map[yy][xx]);		
		}		
	}
}

int main(){
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			cin>>map[i][j];
		}
	}
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){	
			DFS(i,j,0,0);
		}
	}
	cout<<s.size();
	return 0;
}
