#include <iostream>
#include <list>
using namespace std;

int main(){
	int m;
	string input; 
	cin>>input>>m; 
	list<char> l(input.begin(), input.end());
	auto cur=l.end();
	while(m--){
		char cmd;
		cin>>cmd;
		if(cmd=='L'){
			if(cur!=l.begin()) cur--; 			
		}
		else if(cmd=='D'){
			if(cur!=l.end()) cur++; 
		}
		else if(cmd=='B'){
			if(cur!=l.begin()){
				cur=l.erase(--cur); //삭제한 원소의 다음 원소를 가리킴  
			}
		}
		else if(cmd=='P'){
			char c;
			cin>>c; 
			l.insert(cur, c);
		}
	}
	for(auto it=l.begin(); it!=l.end(); it++){
		cout<<*it;
	}	
	return 0;
}