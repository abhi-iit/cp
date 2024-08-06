class Solution {
    
private:
   
   void dfs(vector<vector<int>>& image, int sr, int sc, int color, int store){
      
   image[sr][sc] = color;

      vector<vector<int>> n = {{-1,0}, {0,1}, {1,0}, {0,-1}};
      
      int rows = image.size();
      int col = image[0].size();

      for(int i=0; i<4; i++){

        int newrow = sr + n[i][0];
        int newcol = sc + n[i][1];

        if(newrow >= 0 && newcol >= 0 && newrow < rows && newcol < col && image[newrow][newcol] == store ){

        dfs(image, newrow, newcol, color, store);

        }
        
      }

   }
   
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int store = image[sr][sc];
        
       if (store != newColor) {
            dfs(image, sr, sc, newColor, store);
        }
         
         return image;
    }
};