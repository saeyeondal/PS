#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    vector<int> power = {5, 3, 1};
    
    for(int i=0; i<power.size(); i++){
        if(hp / power[i] < 1) continue;
        answer = answer + hp / power[i];
        hp = hp % power[i];         
    }
    return answer;
}