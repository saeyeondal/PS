#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b){
    return a+b>b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> n;
    int sum=0;
    for(int i=0; i<numbers.size(); i++){
        n.push_back(to_string(numbers[i]));
    }
    sort(n.begin(), n.end(), cmp);
    for(int i=0; i<n.size(); i++){
        answer+=n[i];
    }
    if(answer[0]=='0') return "0"; 
    return answer;
}