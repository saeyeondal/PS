#include <iostream>
#include<stack>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	string str;
	stack <char> st;
    
	cin.ignore(); //버퍼 비우기
	while (t--) {
		getline(cin, str);
		str += ' '; 
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ' ') {  //공백일 때
				while (!st.empty()) { //스택에 있는 내용을 전부 출력
					cout << st.top();
					st.pop();
				}cout << ' ';
			}
			else {  //문자일 때
				st.push(str[i]); //스택에 추가
			}
		}cout<<'\n';
	}
	return 0;
}