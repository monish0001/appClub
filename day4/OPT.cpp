    #include<bits/stdc++.h>
    using namespace std;
    vector<bool> v(10e6+1,1);
    void preComputation(){
        for(int i=2;i<v.size();i++){
           if(v[i]){
               for(int j=2*i;j<v.size();j=j+i)
                        v[j]=0;
           }
       }
        v[0]=v[1]=v[2]=1;
    }
    string solve (int N) {
       if(v[N]){
           return "No";
       }else{ 
            return "Yes";
       }
    }
     
    int main() {
     
        ios::sync_with_stdio(0);
        cin.tie(0);
        preComputation();
        int T;
        cin >> T;
        for(int t_i=0; t_i<T; t_i++)
        {
            int N;
            cin >> N;
           
     
            string out_;
            out_ = solve(N);
            cout << out_;
            cout << "\n";
        }
    }