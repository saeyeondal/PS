#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main(){
	int a, b; //a진법 -> b진법  
	int m, ten=0; //a진법 자릿수, 10진수  
	cin>>a>>b;
	cin>>m;
	
	//a진수를 10진수로 변환  
	for(int i=m-1; i>=0; i--){
		int num;
		cin>>num;
		ten+=num*pow(a,i);
	} 
	//10진수를 b진수로 변환  
	stack<int> res;
	
	while(ten){
		res.push(ten%b);
		ten/=b;
	}
	
	while(!res.empty()){
		cout<<res.top()<<" ";
		res.pop();		
	}
	return 0;
} 