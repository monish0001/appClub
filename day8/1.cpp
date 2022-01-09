#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int distinctElements=0,uniqueElements=0; 
        vector<int> happening(1002,0);
        int n,m;cin>>n>>m;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
           int x;cin>>x;
           v.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {  
           v[i]=v[i]%m;
           happening[v[i]]=happening[v[i]] +1;
        }

        for(int i=0;i<1002;i++){
            if(happening[i]==1) uniqueElements++;
            if(happening[i]) distinctElements++;
        }
        cout<<distinctElements<<endl<<uniqueElements<<endl;

    }


    return 0;
}
