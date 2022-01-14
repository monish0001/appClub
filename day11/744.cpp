class Solution {
public:
    char nextGreatestLetter(vector<char>& v, char target) {
        int start=0,end=v.size()-1;
       
        while(start<=end){
            int mid=start+ (end-start)/2;
            if(v[mid]>target){
               end=mid-1;
            }else{
                
                 start=mid+1;
            }

        }
        int t=(start)%(v.size());
    return v[t];
    }
};