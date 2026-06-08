//bfs traversal
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
    
    void bfs(){
        queue<int> q;
        vector<bool> visited(v,false);
        q.push(0);
        visited[0]=true;
        while(q.size()>0){
            int u=q.front();
            q.pop();
            cout<<u<<" ";
            for(int v:l[u]){
                if(!visited[v]){
                visited[v]=true;
                q.push(v);
                }
            }
        }
        cout<<endl;
    }
};
int main() {
	// your code goes here
	graph g(5);
	g.addedge(0,1);
	g.addedge(1,2);
	g.addedge(1,3);
	g.addedge(2,3);
	g.addedge(2,4);
    g.bfs();
    return 0;
}
