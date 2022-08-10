#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
	string s;
	getline(cin, s); //공백포함 문자열 입력받기  
	stack<char> st;
	vector<char> v; 
 	string tmp="";
 	
	for(int i=0; i<=s.size(); i++){
		if(s[i]=='<') {
			while(!st.empty()){
				cout<<st.top();
				st.pop();
			}
			while(s[i]!='>'){
				cout<<s[i];
				i++;
			}
			cout<<">";
		}
		else if(s[i]==' ' || s[i]=='\0') {
			while(!st.empty()){
				cout<<st.top();
				st.pop();
			}
			cout<<" ";
		}
		else{
			st.push(s[i]);
		}
	}
	return 0;
}