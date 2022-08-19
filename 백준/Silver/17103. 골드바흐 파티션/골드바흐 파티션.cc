#include <iostream>
#include <cmath>
#define N 1000001
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	
	bool prime[N];
	//prime 배열 초기화 
	prime[0]=prime[1]=false; 
	for(int i=2; i<N; i++){
		prime[i]=true; 
	} 
	
	for(int i=2; i<sqrt(N); i++){ //아리토스테네스의 체  
		if(prime[i]){
			for(int j=i*2; j<=N; j+=i){ //소수가 아닌경우 false  
				prime[j]=false; 
			}
		}
	}
	
	int t, cnt=0;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		for(int i=2; i<=num/2; i++){
			if(prime[i]&&prime[num-i]) cnt++;
		}
		cout<<cnt<<endl;
		cnt=0;
	}
	return 0;
} 