//bfs traversal of graph
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> bfs(vector<vector<int> > &adj){
int v=adj.size();
vector<bool> visited(v,false);
vector<int> res;
queue<int> q;
int src=0;
visited[src]=true;
q.push(src);
while(!q.empty()){
    int curr=q.front();
    q.pop();
    res.push_back(curr);
    for(int x :adj[curr]){
        if(!visited[x]){
            visited[x]=true;
            q.push(x);
        }
    }
}
return res;
}
int main() {
    int v,e;
    cin>>v>>e;
    vector<vector<int> > adj(v);
    for(int i=0;i<e;i++){
        int u,w;
        cin>>u>>w;
        adj[u].push_back(w);
        adj[w].push_back(u);
    }
    vector<int> res=bfs(adj);
    for(int x:res){
        cout<<x<<" ";
    }
    return 0;
}

