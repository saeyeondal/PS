#include <iostream>
using namespace std;
int map[2200][2200];
int m_one=0, zero=0, p_one=0;
int n;
void cutPaper(int x, int y, int size){
	bool same=true;	
	for(int i=y; i<y+size; i++){
		for(int j=x; j<x+size; j++){
			if(map[i][j] != map[y][x]) {
				same=false;  
				break;
			}
		}
		if(same==false) break;		
	}
	if(same==true){ //종이가 모두 같은 수로 되어있는 경우 
		if(map[y][x]==-1) m_one++; //-1
		else if(map[y][x]==0) zero++; //0
		else p_one++; //1
	}	
	else { //종이를 9등분  
		cutPaper(x, y, size/3);
		cutPaper(x+size/3, y, size/3);		
		cutPaper(x+size/3+size/3, y, size/3);	
		
		cutPaper(x, y+size/3, size/3);
		cutPaper(x+size/3, y+size/3, size/3);		
		cutPaper(x+size/3+size/3, y+size/3, size/3);
		
		cutPaper(x, y+size/3+size/3, size/3);
		cutPaper(x+size/3, y+size/3+size/3, size/3);		
		cutPaper(x+size/3+size/3, y+size/3+size/3, size/3);				
	}
} 

int main(){
	cin>>n;  
	//종이 입력받기 
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>map[i][j];
		}
	}
	cutPaper(1, 1, n);
	cout<<m_one<<endl<<zero<<endl<<p_one<<endl;
	return 0;
}