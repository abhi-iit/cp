    
  private:
  
  bool cycle(int vis[], vector<int> adj[], int st){
      
      queue<pair<int,int>> q;
        
        q.push({st,-1});
        
        vis[st] = 1;
        
        while(!q.empty()){
            
            int node = q.front().first;
            int parent = q.front().second;
            
            q.pop();
            
            for(auto it : adj[node]){
                
                 if(!vis[it]){
                     
                     q.push({it,node});
                     vis[it] = 1;
                 }
                 
                 else if(parent != it) return true;
            }
           
        }
        
        return false;
  }
    
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        
        
        int vis[V] = {0};
        
        for(int i=0; i<V; i++){
            
            if(!vis[i]){
                
                if(cycle(vis,adj,i) == true){
            
                 return true;
            
            }
             
        }
    }
    
    return false;
        

       
    }