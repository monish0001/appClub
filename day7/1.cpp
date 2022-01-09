class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        long long temp=x,sum=0;
        while(temp>0){
            int lastdigit=temp%10;
                temp/=10;
            sum=sum*10+lastdigit;
        }
        if(sum==x) return 1;
        else return 0;
        
    }
};
