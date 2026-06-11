//adjacency matrix representation of a graph
#include<iostream>
#include<vector>
using namespace std;
void addedge(int e1,int e2,vector<vector<int>>&adjmatrix){
    adjmatrix[e1][e2] = 1;
    adjmatrix[e2][e1] = 1;
}
int main(){
    int n = 5; 
    vector<vector<int>> adjmatrix(n, vector<int>(n, 0));
    addedge(0, 1, adjmatrix);
    addedge(0, 4, adjmatrix);
    addedge(1, 2, adjmatrix);
    addedge(1, 3, adjmatrix);
    addedge(1, 4, adjmatrix);
    addedge(2, 3, adjmatrix);
    addedge(3, 4, adjmatrix);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adjmatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

