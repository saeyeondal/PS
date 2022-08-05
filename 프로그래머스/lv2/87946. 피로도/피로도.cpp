#include <string>
#include <vector>
int needEnergy[8]; //최소 필요 피로도
int useEnergy[8]; //소모 피로도 
bool visited[8]; //던전 탐험 유무 
int num, result=0; 
using namespace std;

void DFS(int cnt, int remain){
    for(int i=0; i<num; i++){
        if(!visited[i]&&needEnergy[i]<=remain){
            visited[i]=true;
            DFS(cnt+1, remain-useEnergy[i]);
            visited[i]=false;
        }
    }
    result=max(result, cnt);
    return;
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    num=dungeons.size();
    for(int i=0; i<num; i++){
        needEnergy[i]=dungeons[i][0];
        useEnergy[i]=dungeons[i][1];
    }
    DFS(0,k);
    return answer=result;
}