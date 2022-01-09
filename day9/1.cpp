
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0,end=numbers.size()-1;
        vector<int> res(2);
        while(start<end){
        if(numbers[start]+numbers[end]==target){
            res[0]=++start;
            res[1]=++end;
             break;
        }
        if(numbers[start]+numbers[end]>target){
            end--;
        }else{
            start++;
        }
        
        }
        return res;
    }
};