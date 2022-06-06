#include <vector>
#include <iostream>
#include <algorithm> 
using namespace std;
 
int main(){
	int N, weight, max=-1;
	cin>>N;
	vector<int> v(N);	
	for(int i=0; i<N; i++){
		cin>>weight; 
		v[i]=weight;
	} 
	sort(v.begin(), v.end());
	for(int i=N,j=0; i>0,j<N; i--,j++){
		if(i*v[j]>max) max=i*v[j];
	}
	cout<<max;
	return 0;
}