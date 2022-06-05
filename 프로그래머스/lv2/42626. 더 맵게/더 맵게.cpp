#include <string>
#include <vector>
#include <queue>
using namespace std;
priority_queue <int, vector<int>, greater<int> > pq;

int solution(vector<int> scoville, int K) {
    int answer = 0, first, second;
    for(int i=0; i<scoville.size(); i++){
        pq.push(scoville[i]);  //min heap에 삽입 
    }
    while((pq.top()<K)&&(!pq.empty())){  //모든 음식의 스코빌 지수가 K이상 일때까지 반복
        answer++;
        first=pq.top(); //가장 맵지 않은 음식의 스코빌 지수
        pq.pop();
        if(pq.empty()) return -1;
        second=pq.top(); //두 번째로 맵지 않은 음식의 스코빌 지수
        pq.pop();
        int mixed = first+(second*2);
        pq.push(mixed);  
    }
    if(answer==0) return -1;
    return answer;
}