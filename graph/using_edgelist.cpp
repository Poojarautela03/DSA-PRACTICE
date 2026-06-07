#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=4;
    vector<int> adj[4];
    vector<pair<int,int>> edges={
        {0,1},{0,2},{1,2},{2,3}
    };
    for(auto it:edges){
        int u=it.first;
        int v=it.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(int j:adj[i] ){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
