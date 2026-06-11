//Breadth First Search: Shortest Reach
vector<int> bfs(int n, int m, vector<vector<int>> edges, int s) {
    //Create adjacency list
    vector<vector<int>> adj(n+1);

    for(auto e : edges){
        adj[e[0]].push_back(e[1]);
        adj[e[1]].push_back(e[0]);
    }

    //  Distance array
    vector<int> dist(n+1, -1);

    // BFS queue
    queue<int> q;

    // Start from source
    dist[s] = 0;
    q.push(s);

    //  BFS traversal
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for(int neigh : adj[curr]){
            if(dist[neigh] == -1){
                dist[neigh] = dist[curr] + 6;
                q.push(neigh);
            }
        }
    }
    vector<int> result;
    for(int i = 1; i <= n; i++){
        if(i != s){
            result.push_back(dist[i]);
        }
    }

    return result;
}
