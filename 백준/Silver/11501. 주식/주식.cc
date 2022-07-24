#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int t, n;
	cin>>t;
	while(t--){
		int cost; 
		long res=0;
		cin>>n; 
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin>>cost; 
			v[i]=cost; 
		}
		int max_v=-1; 
		for(int i=n-1; i>=0; i--){
			max_v=max(max_v, v[i]);
			res+=max_v-v[i]; 
		}
		cout<<res<<"\n"; 
	}
	return 0;
}