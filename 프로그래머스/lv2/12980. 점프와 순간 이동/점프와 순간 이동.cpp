#include <iostream>
using namespace std;

int solution(int n)
{   
    int answer=0;
    while(n>0){
        if(n%2==0) n=n/2; //짝수일 경우
        else {
            n--; //홀수일 경우
            answer++;
        }
    }
    return answer;
}