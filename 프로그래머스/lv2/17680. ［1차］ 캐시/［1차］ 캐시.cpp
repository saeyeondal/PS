#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;
 
int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    deque<string> cache;
    
    for(int i=0; i<cities.size(); i++) {
        string city=cities[i];
        //대문자 > 소문자 변환
        for (int j=0; j<city.length(); j++) {
            city[j]=tolower(city[j]);
        }
        //캐시 hit, miss인지 판단
        bool hit=false;
        int index=0;
        for (index=0; index<cache.size(); index++) {
            if (cache[index]==city) {
                hit=true;
                break;
            }
        }
        //LRU
        cache.push_back(city);
 
        if (hit) { //캐시 hit
            cache.erase(cache.begin()+index); //캐시에 있는 기존 데이터 삭제
            answer=answer+1;
        }
        else { //캐시 miss 
            if (cache.size()>cacheSize) {
                cache.pop_front(); //가장 오래된 데이터 삭제
            }
            answer=answer+5;
        }
    }
    return answer;
}
