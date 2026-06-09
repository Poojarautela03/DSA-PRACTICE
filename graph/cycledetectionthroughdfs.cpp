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
    bool iscycleundirDFS(int src,int par,vector<bool> &vis){//dfs algo
        vis[src]=true;
        list<int> neighbours=l[src];
        for(int v:neighbours){
            if(!vis[v]){
                if(iscycleundirDFS(v,src,vis)){
                    return true;
                }
            }else if(v!=par){
                return true;
            }
        }
        return false;
    }
    bool iscycle(){
        vector<bool> vis(v,false);
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(iscycleundirDFS(i,-1,vis)){
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
