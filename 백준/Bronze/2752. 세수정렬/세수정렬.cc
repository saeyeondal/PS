#include <vector>
#include <iostream>
#include <algorithm> 
using namespace std;

int main(){
	vector<int> v;
	int input;
	for(int i=0; i<3; i++){
		cin>>input;
		v.push_back(input);
	} 
	sort(v.begin(), v.end());
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	return 0;
}