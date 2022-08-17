#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, cnt_two=0, cnt_five=0;
	cin>>n;
	//2*5의 개수 구하기 
	for(int i=n; i>=1; i--){
		int tmp=i; 
		while(1){
			if(tmp%2==0) {
				cnt_two++;	
				tmp=tmp/2;
			}
			else if(tmp%5==0) {
				cnt_five++;
				tmp=tmp/5;
			}	
			else break;		
		}
	} 
	if(cnt_two>0 && cnt_five>0){
		cout<<min(cnt_two, cnt_five);
	}
	else cout<<0;
	return 0;
}