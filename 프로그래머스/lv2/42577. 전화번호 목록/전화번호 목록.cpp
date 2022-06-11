#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
     //가장 짧은 문자열 찾아서 다른 번호의 접두어인지 확인 
    sort(phone_book.begin(), phone_book.end()); //문자열 길이 오름차순 정렬 
    for(int i=0; i<phone_book.size()-1; i++){
        if(phone_book[i+1].find(phone_book[i])==0) { //접두어인 경우 
            answer = false; 
            return answer; 
        }
    }
    return answer; 
}