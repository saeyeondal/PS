#include <iostream>
using namespace std;

//최대공약수 구하기
long long gcd(int w, int h){
    long long big = w>=h ? w:h;
    long long small = w<h ? w:h;
    while(small !=0){
        long long m=big%small; 
        big=small;
        small=m;
    }
    return big;
}

long long solution(int w,int h) {
    long long answer=(long long)w*h-(long long)(w+h)+gcd(w,h);
    return answer;
}