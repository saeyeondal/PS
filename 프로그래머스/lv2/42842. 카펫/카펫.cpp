#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown+yellow;
    int tmp = sum;
    int w, h;
    for(int i=1; i<=sum; i++){
        if(sum%i==0){ //i로 나누어떨어지는 경우 
            if(tmp>i)   {
                tmp=sum/i;   
                w=tmp;
                h=i;
               // cout<<"tmp="<<tmp<<" "<<"i="<<i<<endl;  
            }
            if((w-2)*(h-2)==yellow) { //18, 6 -> [6,4] 가 아닌 [8,3] 이라서 조건 추가
                answer.push_back(w);
                answer.push_back(h);
                break;
            }
        }
    }
    return answer;
}