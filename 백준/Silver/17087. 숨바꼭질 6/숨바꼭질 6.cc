#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

//최대공약수 구하기(유클리드 호제법)  
int GCD(int x, int y){
	if(x%y==0) return y;
	else return GCD(y, x%y); 
}
int main(){
	int n, s;
	cin>>n>>s;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		v[i]=abs(a-s);
	}
	if(v.size()==1) cout<<v[0];
	else{
		int tmp=v[1];
		for(int i=0; i<v.size()-1; i++){
			tmp=GCD(v[i], tmp);
		}
		cout<<tmp;
	}
	return 0;
} 