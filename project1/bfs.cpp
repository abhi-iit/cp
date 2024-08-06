  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        queue<int> q;
        vector<int> store;
        int visited[V] = {0};
        
        visited[0] = 1;
        
        q.push(0);
        store.push_back(0);
        
        while(!q.empty()){
            
            int start = q.front();
            q.pop();
            
            for(auto it : adj[start]){
                
                if(visited[it] == 0){
                    
                    visited[it] = 1;
                    q.push(it);
                    store.push_back(it);
                }
            }
        }
        
        return store;
        
    }