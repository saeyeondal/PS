#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> m; //키:의상 종류, 값:의상 개수 
    for(int i=0; i<clothes.size(); i++){ 
        m[clothes[i][1]]++; //맵에 없는 경우에는 삽입됨
    }
    for(auto iter=m.begin(); iter!=m.end(); ++iter){  //맵 사이즈 만큼 반복
        answer=answer*(iter->second+1);
    }
    
    return answer-1;
}