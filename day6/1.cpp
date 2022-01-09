#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int findPeakElement(vector<int>& v) {
       int s=0;
    int end=v.size()-1;
    while(s<end){
        int mid=s+(end-s)/2;
        if(v[mid]>v[mid+1]){
            end=mid;
        }else{
            s=mid+1;
        }
    }
    return s;
    }

};
