#include <vector>
#include <map>
#include <iostream>
using namespace std;

int solution(vector<int> nums)
{   
    int n=nums.size()/2;
    int cnt = 0;
    map<int, int> m;
    for(int i=0; i<nums.size(); i++){
        m[nums[i]]++;         
    }
    if(n<m.size()) return n;
    else return m.size();
}