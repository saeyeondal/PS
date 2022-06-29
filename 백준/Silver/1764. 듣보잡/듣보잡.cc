#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
	map<string, int> mp; 
	vector<string> v;
	int n, m;
	string input; 
	cin>>n>>m;
	for(int i=0; i<n+m; i++){
		cin>>input;
		mp[input]++;
	} 
	for(auto iter = mp.begin(); iter!= mp.end(); iter++) {
		if (iter->second > 1) {
			v.push_back(iter->first);
		}
	}	
	cout << v.size() << "\n";
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<"\n"; 
	}
	return 0; 
}