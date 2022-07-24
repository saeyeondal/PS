#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int num[4]={1, 5, 10 ,50};
bool check[50*20+1]; //L문자가 최대 20개 나온 경우  
int n, res=0;

void BFS(int idx, int sum, int depth){
	if(depth==n){
		if(!check[sum]) {
			check[sum]=true;
			res++;	
		}
	}
	else{
		for(int i=idx; i<4; i++){
			BFS(i, sum+num[i], depth+1);
		}	
	}
} 

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(0);
 	
	cin>>n;
	BFS(0,0,0);
	cout<<res; 
	return 0;
}