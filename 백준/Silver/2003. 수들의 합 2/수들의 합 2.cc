#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, m, i, j, sum=0, cnt=0;
	cin>>n>>m;
	vector<int> v(n);
	for(i=0; i<n; i++){
		cin>>v[i];
	}
	for(i=0; i<n; i++){
		if(j==n) sum=0;
		for(j=i; j<n; j++){
			sum=sum+v[j];
			if(sum==m){
				cnt++;	
				sum=0;
				break;
			}
			else if(sum>m){
				sum=0;
				break;
			}
		}
	}
	cout<<cnt;
	return 0;
}