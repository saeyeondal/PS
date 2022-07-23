#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
const int MAX_SIZE = 500;
 
//집합 크기 비교 
bool cmp(const vector<int>& a, const vector<int>& b){
    return a.size() < b.size();
}

vector<int> solution(string s) {
    vector<int> answer;    
    vector<vector<int>> vv(MAX_SIZE, vector<int>());
    vector<int> visited(100001, 0);
    int n = 0;
    string tmp = "";
    //집합 벡터 생성 
    for(int i=0; i<s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            tmp += s[i];
        }
        else{
            if(s[i] == ',' && !tmp.empty()){
                vv[n].push_back(stoi(tmp));
                tmp = "";
            }
            if(s[i] == '}' && !tmp.empty()){
                vv[n].push_back(stoi(tmp));
                tmp = "";
                n++;
            }
        }
    }
    //집합의 크기가 작은 순으로 정렬 
    sort(vv.begin(), vv.begin()+n, cmp);
    for(int i=0; i<n; i++){
        for(int j=0; j<vv[i].size(); j++){
            if(!visited[vv[i][j]]){
                answer.push_back(vv[i][j]);
                visited[vv[i][j]] = 1;
            }
        }
    }
    return answer;
}