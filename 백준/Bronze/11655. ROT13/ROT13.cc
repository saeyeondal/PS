#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	getline(cin, input);
	
	for(int i=0; i<input.length(); i++){
		if(input[i]==' ') cout<<" ";
		else if(input[i]>='0' && input[i]<='9') cout<<input[i];
		 //'A':65,'Z':90, 'a':97, 'z': 122 
		else if(input[i]>='n') cout<<char(97+input[i]+13-123);
		else if(input[i]>='N' && input[i]<='Z') cout<<char(65+input[i]+13-91);
		else cout<<char(input[i]+13);
	}
	return 0;
}