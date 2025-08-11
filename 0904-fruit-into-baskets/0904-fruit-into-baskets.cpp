class Solution {
public:
    int totalFruit(vector<int>& str) {
        if(str.size()==1) return 1;  //edge case
        
        
        int n=str.size();
    int i=0, j=0, res =INT_MIN;
    unordered_map<int, int> mp;
    
    
    while(j < n)
    {
        mp[str[j]]++;  //calculation
        if(mp.size()<2){   //condition 1
            j++;
        }
        if(mp.size() == 2){      //conditon 2
            res = max(res, j-i+1);
            j++;}
        else if(mp.size() > 2)       //condition 3
        {
            while(mp.size() > 2)
            {
                mp[str[i]]--;
                if(mp[str[i]] == 0){
                    mp.erase(str[i]);
                
                }
                i++;
               // if(mp.size() == 2)
                 // res = max(res, j-i+1);
            }
            j++;
        }
        
    }
        if(mp.size()==1){
            auto it = mp.begin();
        return it->second;
        }
            
        return res;
        
    }
};