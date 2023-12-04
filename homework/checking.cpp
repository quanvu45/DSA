#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> edge;
int m,n,start;
vector<bool> dd;

int DFS(int x,int y){
    if(dd[y]){
        return 0;
    }
    dd[y]=true;
    for(int i=1;i<=m;i++){
        if(edge[y][i]!=0){
            return edge[y][i]+DFS(y,i);
        }
    }
    return 0;
}

int main(){
    cin>>m>>n>>start;
    int x,y,z;
    vector<int>temp(m+1,0);
    for(int i=0;i<=m;i++){
        edge.push_back(temp);
        dd.push_back(false);
    }
    //dd[start]=true;
    for(int i=0;i<n;i++){
        cin>>x>>y>>z;
        edge[x][y]=z;
    }
    cout<<DFS(start,start);

}