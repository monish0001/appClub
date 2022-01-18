#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mCount=floor(nums.size()/2);
        if(mCount==0){
            return nums[0];
        }
            int result=0;
        unordered_map<int,int> ump;
        for (int i = 0; i < nums.size(); i++)
        {
           ump[nums[i]]++;
        }
        for(auto it=ump.begin();it!=ump.end();it++){
            if(it->second>mCount){
                result=it->first;
            }
        }
    return result;
    }
};