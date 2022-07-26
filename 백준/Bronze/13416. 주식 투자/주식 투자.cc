#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(0);
 	
	int t, n, res=0;  
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++){
			vector<int> v;	
			for(int j=0; j<3; j++){
				int a;
				cin>>a;
				v.push_back(a);
			}
			sort(v.begin(), v.end());
			if(v[2]>0) res=res+v[2];	
		}
		cout<<res<<"\n";
		res=0; 
	}
	return 0;
}