#include <vector>
#include <iostream>
#include <algorithm> 
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);	
	int N, end, begin;
	vector<pair<int, int>> v; 
	cin>>N;
	for(int i=0; i<N; i++){
		cin>>begin>>end;
		v.push_back(make_pair(end, begin)); //벡터에 쌍으로 집어넣기 
	}
	sort(v.begin(), v.end());  //회의 끝나는 시간으로 정렬 
	int time=v[0].first;  //종료 시간이 가장 빠른 스케줄의 종료시점 
	int cnt=1;
	for(int i=1; i<N; i++){
		if(time<=v[i].second){
			cnt++;
			time=v[i].first;
		}
	}
	cout<<cnt;
}