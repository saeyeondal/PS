#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <map> 
using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<vector<string>> IDAction; //(id, action)
    map<string, string> m; //(id, nickname)
    for(int i=0; i<record.size(); i++){
        string order, id, nickname;  
        stringstream ss(record[i]); //문자열 공백 기준으로 자르기 
        ss>>order>>id>>nickname; 
        if(order!="Change"){
            vector<string> v;
            v.push_back(id); 
            if(order=="Enter") v.push_back("님이 들어왔습니다.");
            else v.push_back("님이 나갔습니다.");
            IDAction.push_back(v);
        }
        if(order!="Leave"){ //입장 또는 변경의 경우 
            m[id]=nickname; 
        }
    }
    for(int i=0; i<IDAction.size(); i++){
        auto it=m.find(IDAction[i][0]);
        answer.push_back(it->second+IDAction[i][1]); 
    }
    return answer;
}