#include <iostream>
#include <vector>
using namespace std;

//최대공약수 구하기(유클리드 호제법)  
int gcd(int x, int y){
	if(x%y==0) return y;
	else return gcd(y, x%y); 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		//주어지는 수는 최대  1,000,000이다.  n이 100 일 때 주어진 수가 모두 1,000,000이면 정답이 int의 범위를 초과하므로 자료형을 long long으로 선언함 
		long long sum=0;
		cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			int num;
			cin>>num;
			v[i]=num;
		} 
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				sum=sum+gcd(v[j],v[i]);
			}
		}
		cout<<sum<<endl; 
	}
	return 0;
} 
