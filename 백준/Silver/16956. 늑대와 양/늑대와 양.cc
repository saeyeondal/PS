#include <iostream>
#include <vector>
using namespace std;
char farm[501][501];
const int dy[4] = {1,-1,0,0};
const int dx[4] = {0,0,1,-1};

int main(){
	int r, c;
	cin>>r>>c;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>farm[i][j];
		}
	}
	int yy, xx;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			if(farm[i][j]=='S'){
				for(int k=0; k<4; k++){
					yy=i+dy[k];
					xx=j+dx[k];
					if(yy>=r||xx>=c||yy<0||xx<0) continue;
					if(farm[yy][xx]=='W') {
						cout<<0;
						return 0; 
					}
					else if(farm[yy][xx]=='.') farm[yy][xx]='D';
				}
			}
		}
	}
	cout<<1<<endl;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<farm[i][j];
		}
		cout<<endl;
	}	
	return 0;
}