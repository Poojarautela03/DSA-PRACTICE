#include <bits/stdc++.h>
using namespace std;
#include <vector>
#include <list>
class graph{
    int v;
    list<int> *l;
public:
    graph(int v){
        this->v=v;
        l=new list<int> [v];
    }
    
    void addedge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    bool iscycleundirBFS(int src,vector<bool> &vis){//dfs algo
        queue<pair<int,int>> q;
        q.push({src,-1});
        vis[src]=true;
        while(q.size()>0){
            int u=q.front().first;
            int parU=q.front().second;
            q.pop();
            list<int> neighbours=l[u];
            for(int v:neighbours){
                if(!vis[v]){
                    q.push({v,u});
                    vis[v]=true;
                }
                else if(v!=parU){//cycle conditn
                    return true;
                }
            }
        }
        return false;
    }
    bool iscycle(){//(v+e)
        vector<bool> vis(v,false);
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(iscycleundirBFS(i,vis)){
                    return true;
                }
            }
        }
        return false;
    }
};
int main() {
	graph g(5);
	g.addedge(0,1);
	g.addedge(0,2);
	g.addedge(0,3);
	g.addedge(1,2);
	g.addedge(3,4);
    cout<<g.iscycle()<<endl;
    return 0;

}
