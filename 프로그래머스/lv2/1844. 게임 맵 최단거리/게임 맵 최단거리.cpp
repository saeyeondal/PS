#include<vector>
#include<queue>
#include<iostream>
using namespace std;
int dx[4]={-1, 0, 1, 0};
int dy[4]={0, 1, 0, -1};

int solution(vector<vector<int> > maps)
{
    int n=maps.size(); //n행
    int m=maps[0].size(); //m열 
    vector<vector<int> > visited(n, vector<int>(m));
    vector<vector<int> > dist(n, vector<int>(m));
    queue<pair<int, int>> q;
    
    q.push(make_pair(0,0));
    visited[0][0]=1;
    dist[0][0]=1;
    
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second; 
        q.pop();
        
        for(int i=0; i<4; i++){
            int xx=x+dx[i];
            int yy=y+dy[i];   
            if(xx>=0&&xx<n&&yy>=0&&yy<m) {
                //if(maps[xx][yy]==1&&visited[xx][yy]==0) cout<<"xx="<<xx<<"yy="<<yy<<endl; 
                if(maps[xx][yy]==1&&visited[xx][yy]==0) {
                    q.push(make_pair(xx,yy));   
                    visited[xx][yy]=1;
                    dist[xx][yy]=dist[x][y]+1;
                }
            }
        }
    }   
    if(!visited[n-1][m-1]) return -1;
    return dist[n-1][m-1];
}