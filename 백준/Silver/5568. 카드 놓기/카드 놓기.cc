#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;
int n, k;
int ch[10];
vector<string> card;
set<string> cardSet;

void dfs(int L, string s){
	if(L==k) {
		cardSet.insert(s);
		return; 
	}
	else{
		for(int i=0; i<n; i++){
			if(ch[i]==0){
				ch[i]=1;
				dfs(L+1, s+card[i]);
				ch[i]=0;
			}
		}
	}
}

int main(){
	cin>>n>>k;
	string s;
	for(int i=0; i<n; i++){
		cin>>s;
		card.push_back(s);
	}
	dfs(0, s);
	cout<<cardSet.size();
	return 0;
}