#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	while(getline(cin, input)){	//입력 개수 주어지지 않아 getline 함수를 반복조건에 넣어 EOF까지 입력받게 함 		
		int a=0, b=0, c=0, d=0;
		for(int i=0; i<input.length(); i++){
			if(input[i]>='a'&&input[i]<='z') a++;
			else if(input[i]>='A'&&input[i]<='Z') b++;
			else if(input[i]>='0'&&input[i]<='9') c++;
			else if(input[i]==' ') d++;
		}		
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<< endl;	
	}	
	return 0;
}