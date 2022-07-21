#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue<int> q; 
	string s[6] = {"push", "pop", "size", "empty", "front", "back"};
	int n;
	cin>>n;
	while(n>0){
		string order;
		cin>>order;
		if(order==s[0]){
			int num; 
			cin>>num;
			q.push(num); 
		}
		else if(order==s[1]){
			if(q.empty()) cout<<-1<<endl;
			else{
				cout<<q.front()<<endl;;
				q.pop();	
			}
		}
		else if(order==s[2]){
			cout<<q.size()<<endl;
		}
		else if(order==s[3]){
			if(q.empty()) cout<<1<<endl;
			else cout<<0<<endl;
		}
             else if(order==s[4]){
                 if(q.empty()) cout<<-1<<endl;
                 else cout<<q.front()<<endl;
             }
		else{
			if(q.empty()) cout<<-1<<endl;
			else cout<<q.back()<<endl;
		}
		n--;
	}
	return 0;
}