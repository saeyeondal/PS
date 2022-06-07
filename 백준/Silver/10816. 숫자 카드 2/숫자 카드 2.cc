#include <vector>
#include <iostream>
#include <algorithm> 
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);	
	int N, M, num;
	cin>>N;	//가지고 있는 숫자 카드 개수
	vector<int> v(N, 0); 
	for(int i=0; i<N; i++){
		cin>>v[i]; 
	}
	sort(v.begin(), v.end());
	
	cin>>M; //비교하려는 숫자 카드 개수  	
	for(int i=0; i<M; i++){
		cin>>num;
		cout<<upper_bound(v.begin(), v.end(), num) - lower_bound(v.begin(), v.end(), num)<<" "; 
	}
}