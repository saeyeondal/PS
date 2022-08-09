#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	string s;
	cin>>s;
	vector<string> v;
	for(int i=0; s.size(); i++){
		v.push_back(s);
		s.erase(s.begin(),s.begin()+1);
	}
	sort(v.begin(), v.end());
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<endl;
	}
	return 0;
}