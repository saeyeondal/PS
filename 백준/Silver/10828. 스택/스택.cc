#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<int> st; 
	string s[5] = {"push", "pop", "size", "empty", "top"};
	int n;
	cin>>n;
	while(n>0){
		string order;
		cin>>order;
		if(order==s[0]){
			int num; 
			cin>>num;
			st.push(num); 
		}
		else if(order==s[1]){
			if(st.empty()) cout<<-1<<endl;
			else{
				cout<<st.top()<<endl;;
				st.pop();	
			}
		}
		else if(order==s[2]){
			cout<<st.size()<<endl;
		}
		else if(order==s[3]){
			if(st.empty()) cout<<1<<endl;
			else cout<<0<<endl;
		}
		else{
			if(st.empty()) cout<<-1<<endl;
			else cout<<st.top()<<endl;
		}
		n--;
	}
	return 0;
}