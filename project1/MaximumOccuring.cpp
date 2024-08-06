

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str) {
        
        int cnt[26] = {0};
        
        for(int i=0; i<str.length(); i++){
            
            int store = str[i] - 'a';
            
            cnt[store] ++;
            
        }
        
        int maxi  = 0;
        int StoreIndex = 0;
        
        for(int i=0; i<26; i++){
            
            if(cnt[i] > maxi){
                
                maxi = cnt[i];
                StoreIndex = i;
            }
        }
        
        char ans = StoreIndex + 'a';
        
        return ans;
            
            
     }
        

};