#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int n=sizes.size();
    vector<int> w(n);
    vector<int> h(n);
    for(int i=0; i<n; i++){
        sort(sizes[i].begin(), sizes[i].end()); 
        w[i] = sizes[i][0];
        h[i] = sizes[i][1];
    }
    sort(w.begin(), w.end());
    sort(h.begin(), h.end());
    answer= w[n-1]*h[n-1];
    return answer;
}