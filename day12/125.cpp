#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool isPalindrome(string s){
        for (int i = 0; i < s.size(); i++) {
        if (s[i] < 'A' || s[i] > 'Z' &&s[i] < 'a' || s[i] > 'z'){   
             if(s[i]!=48&&s[i]!=49&&s[i]!=50&&s[i]!=51&&s[i]!=52&&s[i]!=53&&s[i]!=54&&s[i]!=55&&s[i]!=56&&s[i]!=57){
            s.erase(i,1); 
            i--;
             }
        }
        }
        if(s.size()==1) return 1;
        int l=s.size()-1;
        for(int i=0;i<s.size();i++)
            s[i]=tolower(s[i]);
        for(int i=0;i<s.size();i++){
            if(s[i]!=s[l]){
          
                return 0;
            }
            l--;
        }
    
      return 1;
    }
};
int main(){
    string str;
    getline(cin,str);
    Solution obj;
    cout<<obj.isPalindrome(str);
    return 0;
}