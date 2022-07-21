#include <iostream>
#include <deque>
using namespace std;

int main(){
	deque<int> dq; 
	int n;
	cin>>n;
	while(n>0){
		string order;
		cin>>order;
		if(order== "push_front"){
			int num; 
			cin>>num;
			dq.push_front(num); 
		}

        else if(order== "push_back"){
			int num; 
			cin>>num;
			dq.push_back(num); 
		}

		else if(order== "pop_front"){
			if(dq.empty()) cout<<-1<<endl;
			else{
				cout<<dq.front()<<endl;
				dq.pop_front();	
			}
		}

         else if(order== "pop_back"){
			if(dq.empty()) cout<<-1<<endl;
			else{
				cout<<dq.back()<<endl;
				dq.pop_back();	
			}
		}

		else if(order== "size"){
			cout<<dq.size()<<endl;
		}
		else if(order== "empty"){
			if(dq.empty()) cout<<1<<endl;
			else cout<<0<<endl;
		}
        else if(order== "front"){
                 if(dq.empty()) cout<<-1<<endl;
                 else cout<<dq.front()<<endl;
        }
		else{
			if(dq.empty()) cout<<-1<<endl;
			else cout<<dq.back()<<endl;
		}
		n--;
	}
	return 0;
}