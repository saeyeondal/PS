#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector <long long> num_v;
vector <char> op_v;
vector<char> op_list = {'*', '+', '-'};

//연산자와 피연산자를 구분 
void seperate(string expression){
    string num=""; 
    for(int i=0; i<=expression.length(); i++){
        if(expression[i]=='+'||expression[i]=='-'||expression[i]=='*'){
            num_v.push_back(stoll(num)); 
            num=""; 
            op_v.push_back(expression[i]); 
        }   
        else if((expression[i]>='0')&&(expression[i]<='9')) {
            num=num+expression[i];
        }
        else num_v.push_back(stoll(num)); 
    }
}

long long calc(long long a, long long b, char op){
    if(op=='+') return a+b;
    else if(op=='-') return a-b; 
    else return a*b; 
}

long long solution(string expression) {
    long long answer = 0;
    seperate(expression); 
    //순열 사용해서 연산자 순위 부여 
    do{
        vector<long long> tmp_num_v = num_v;
        vector<char> tmp_op_v = op_v;
        for(int i=0; i<3; i++){ //연산자 개수 만큼 
            for(int j=0; j<tmp_op_v.size(); j++){ //수식에 포함된 연산자 개수 만큼
                if(op_list[i]==tmp_op_v[j]){
                    tmp_num_v[j] = calc(tmp_num_v[j], tmp_num_v[j + 1], op_list[i]);
                    tmp_num_v.erase(tmp_num_v.begin()+j+1); //tmp_num_v 의 j+1 번째 원소 삭제
                    tmp_op_v.erase(tmp_op_v.begin()+j); //tmp_op_v 의 j 번째 원소 삭제
                    j--;
                }
            }
        }
        //max 값을 연산자 우선순위에 따라 변경될 때마다 바꿔줌
        if (abs(tmp_num_v.front()) > answer) answer = abs(tmp_num_v.front());   
    } while(next_permutation(op_list.begin(), op_list.end())); 
    return answer;
}