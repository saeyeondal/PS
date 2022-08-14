#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int worst=0, best=0;
    int ranks[7]={6, 6, 5, 4, 3, 2, 1}; 
    
    for(int i=0; i<lottos.size(); i++){
        for(int j=0; j<win_nums.size(); j++){
            if(lottos[i]==win_nums[j]) worst++;
        }
    }
    for(int i=0; i<lottos.size(); i++){
        if(lottos[i]==0) best++; 
    } 
    answer.push_back(ranks[best+worst]);
    answer.push_back(ranks[worst]);
    return answer;
}