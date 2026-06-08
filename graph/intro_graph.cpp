#include <bits/stdc++.h>
#include <vector>
#include <list>
using namespace std;

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
    
    void printadjlist(){
        for(int i=0;i<v;i++){
            cout<<i<<":";
            for(int height:l[i]){
                cout<<height<<" ";
            }
            cout<<endl;
        }
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
	g.printadjlist();
    return 0;
}
