 private:
    
  void dfs(vector<int> &vis, vector<int> adj[], vector<int> &store, int i){
        
        vis[i] = 1;
        store.push_back(i);
        
          for(auto it : adj[i]){
              
             if(!vis[it]){
             dfs(vis, adj, store, it);
             
              }
          }
    }
 
    
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int> vis(V,0);
        vector<int> store;
        int i = 0;
        
               dfs(vis, adj, store, i);
               

        return store;
    }