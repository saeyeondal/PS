#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;
bool visited[7]; //방문 유무 
set<int> s; //중복 제거 위함

//소수인지 판별 
bool isPrime(int n){
    if(n==0||n==1) return false; 
    for(int i=2; i<=sqrt(n); i++){ //루트 씌운 값 까지만 계산하면 됨 
        if(n%i==0) return false;
    }
    return true; 
}

void DFS(string original, string sample){
    for(int i=0; i<original.size(); i++){
        if(!visited[i]){
            visited[i]=true;
            DFS(original, sample+original[i]);
            if(isPrime(stoi(sample+original[i])))s.insert(stoi(sample+original[i]));
            visited[i]=false;
        }
    }
    return;
}

int solution(string numbers) {
    int answer = 0;
    DFS(numbers, ""); 
    return s.size();
}