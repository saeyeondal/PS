#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int one[5] ={1,2,3,4,5};
    int two[8]={2,1,2,3,2,4,2,5};
    int three[10]={3,3,1,1,2,2,4,4,5,5}; 
    int cnt1=0, cnt2=0, cnt3=0;
 
    for(int i=0; i<answers.size(); i++){ //문제 맞힌 개수 세기
        if(answers[i]==one[i%5]) cnt1++;
        if(answers[i]==two[i%8]) cnt2++;
        if(answers[i]==three[i%10]) cnt3++; 
    }
    //가장 문제를 많이 맞힌 사람을 answer 배열에 넣어주기 
    if((cnt1==cnt2)&&(cnt1==cnt3)) {
        answer.push_back(1);
        answer.push_back(2);
        answer.push_back(3);
    }
    else if((cnt1==cnt2)&&(cnt2>cnt3)){
        answer.push_back(1);
        answer.push_back(2);   
    }
    else if((cnt2==cnt3)&&(cnt2>cnt1)){
        answer.push_back(2);
        answer.push_back(3);           
    }
    else if((cnt1==cnt3)&&(cnt1>cnt2)){
        answer.push_back(1);
        answer.push_back(3);           
    }    
    else if((cnt1>cnt2)&&(cnt1>cnt3)) answer.push_back(1);
    else if((cnt2>cnt1)&&(cnt2>cnt3)) answer.push_back(2);
    else if((cnt3>cnt1)&&(cnt3>cnt2)) answer.push_back(3);
   // sort(answer.begin(), answer.end); //정답 오름차순 정렬 
    return answer;
}