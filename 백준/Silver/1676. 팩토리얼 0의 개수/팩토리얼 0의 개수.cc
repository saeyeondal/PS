#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, cnt=0;
	cin>>n;
	//5의 개수 구하기 
	for(int i=n; i>=1; i--){
		int tmp=i; 
		while(1){
			if(tmp%5==0) {
				cnt++;
				tmp=tmp/5;
			}	
			else break;		
		}
	} 
	cout<<cnt;
	return 0;
}