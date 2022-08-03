#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
int cnt=0;
int res=0;
vector<int> a[51];
bool ch[51];
int ans[51]; //i번째 사람의 2-친구 수  

//깊이 2까지 들어가는 DFS 
void DFS(int v, int L){
	ch[v] = true;
	if(L==2) return;
	for(int i=0; i<a[v].size(); i++){
		DFS(a[v][i], L+1);
	}
}

int main(){
	cin>>n;
	char tmp;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>tmp;
			if(tmp=='Y') a[i].push_back(j);
		}
	}
	
	for(int i=1; i<=n; i++){
		for(int i=1; i<=50; i++){
			ch[i]=false;
		}
		cnt=0;
		DFS(i,0);
		for(int i=1; i<=n; i++){
			if(ch[i]==true) cnt++;
		}
		ans[i]=cnt-1; //본인은 빼야함 
	}
	sort(ans, ans+51);
	cout<<ans[50]<<endl;
	return 0;
}