class Solution {
public:
    int eatPile(vector<int> &piles,int k,int hours){
        int h=0;
        for(int pile:piles){
            h+=pile/k;
            if(pile % k != 0) h++;
        }
        if(h>hours)
            return 0;
        return 1;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=*max_element(piles.begin(),piles.end());
        while(start<=end){
            int mid=start+(end-start)/2;
            if(eatPile(piles,mid,h)){
               end=mid-1;     
            }else{
                start=mid+1;
            }
            
        }
       return start;
    }
};