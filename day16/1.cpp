#include<bits/stdc++.h>
using namespace std;
string Solution(long n){
    if(n%21==0){
                return "The streak is broken!\n";
            }else{
                while(n!=0){
                if (n%100==21)
                return "The streak is broken!\n";
                n=n/10;
                }
            }
        return "The streak lives still in our heart!\n";
}
int main(){
        int t;cin>>t;
        while(t--){
        long n;cin>>n;
        cout<<Solution(n);
        }
            
return 0;
}