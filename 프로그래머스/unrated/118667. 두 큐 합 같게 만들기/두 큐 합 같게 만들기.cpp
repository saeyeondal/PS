#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = 0;
    queue<int> q1, q2; 
    long long q1_sum=0, q2_sum=0;
    for(int i=0; i<queue1.size(); i++){
        q1_sum+=queue1[i]; 
        q1.push(queue1[i]);
    }
    for(int i=0; i<queue2.size(); i++){
        q2_sum+=queue2[i]; 
        q2.push(queue2[i]); 
    } 
    
    int idx1=0, idx2=0;
    int maxIdx=q1.size()+q2.size();
    while(idx1<maxIdx && idx2<maxIdx){
        if(q1_sum==q2_sum) return answer;
        answer++;
        if(q1_sum<q2_sum) {
            int tmp=q2.front();
            q1.push(tmp);
            q2.pop();            
            q1_sum+=tmp;              
            q2_sum-=tmp;  
            idx2++;
        }
        else{
            int tmp=q1.front();
            q2.push(tmp);          
            q1.pop();
            q1_sum-=tmp;              
            q2_sum+=tmp; 
            idx1++; 
        }
    }
    return -1;
}

