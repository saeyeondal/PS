#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int ch[100001], d[3]={1, -1, 2};
int main(){
	int n, k, x, i, pos;  //수빈:n, 동생:k 
	queue<int> Q;
	cin>>n>>k;  
	if(n==k) {
		cout<<0;
		return 0; 	
	}
	ch[n]=1;  //출발 지점 방문 체크  
	Q.push(n);
	//BFS 탐색
	while(!Q.empty()){
		x=Q.front();
		Q.pop();

  		//수빈이가 현재 위치한 지점은 x, 가려고 하는 지점이 pos 
		for(i=0; i<3; i++){ 
			if(i<2) pos=x+d[i];
            if(i==2) pos=x*d[i];
			if(pos<0 || pos>100000) continue;  
			if(pos==k){
				cout<<ch[x]; //출발 지점을 1로 설정했기 때문에 pos로 가기 전 지점의 거리를 출력  
				exit(0);  //프로그램 종료  
			}
			if(ch[pos]==0){
				//ch[x]: 최소 점프 횟수  
				ch[pos]=ch[x]+1; //ch는 방문여부 표시 및 거리 배열의 역할  
				Q.push(pos);
			}
		}
	} 
	return 0;
}