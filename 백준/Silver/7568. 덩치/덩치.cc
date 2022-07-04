#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<pair<int, int>> p; 
	vector<int> v; 
	for(int i=0; i<n; i++){
		int w, h;
		cin>>w>>h;
		p.push_back(make_pair(w,h)); 
	}	
	for(int i=0; i<n; i++){
		int cnt=0;
		for(int j=0; j<n; j++){
			if((p[i].first<p[j].first)&&(p[i].second<p[j].second))cnt++; 
		}
		v.push_back(cnt+1);
	}
	for(int i=0; i<n; i++){
		cout<<v[i]<<" ";
	}		
	return 0; 
}