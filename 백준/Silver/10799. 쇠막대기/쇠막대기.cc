#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	stack<char> st;
	string input;
	int res=0;
	cin>>input;
	for (int i=0; i<input.length(); i++){
		if (input[i]=='(') {
			st.push(input[i]);
		}
		else if(input[i]==')' and input[i-1]=='('){ // 레이저일때
			st.pop();
			res+=st.size();
		}
		else{ // 마지막 자투리일때
			res++;
			st.pop();
		}
	}
	cout<<res;
}