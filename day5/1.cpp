#include<bits/stdc++.h>
using namespace std;

int getGCDofAllElement(vector<int> &v)
{
    int result = v[0];
    for(int value:v)
        result = __gcd(value, result);
    return result;
}
 
int main(){
    int t;cin>>t;
    while (t--)
    {
        vector<int> v;
        int n;cin>>n;
        for (int i = 0; i < n; i++)
        {   int x;cin>>x;
            v.push_back(x);
        }
    cout<<getGCDofAllElement(v)<<endl;   
    }
    
    return 0;
}