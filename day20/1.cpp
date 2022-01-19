class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> v;
        map<int,vector<int>> mp;
        for(auto it=arr.begin();it!=arr.end();it++){
            int t=__builtin_popcount(*it);
            mp[t].push_back(*it);
        }
        for(auto x:mp){
            sort(x.second.begin(),x.second.end());
            for(auto k:x.second){
                v.push_back(k);
            }
                    
        }
       
      return v;  
    }
};