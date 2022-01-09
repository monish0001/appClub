#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {    long long sumA=0,sumB=0,min=0;
        for(int i=0;i<n; i++){
          if(i%2==0){
            sumA+=a[i];
            sumB+=b[i];
            }
            else{
                sumA+=b[i];
                sumB+=a[i];
            }
        }
        (sumA>sumB) ? min=sumB : min=sumA;
    return min;
    }
};
int main() {
   
        long long n;
        cin >> n;
        long long a[n], b[n];
        for(long long i=0;i<n;i++)
            cin >> a[i];
        for(long long i=0;i<n;i++)
            cin >> b[i];
        Solution ob;
        cout << ob.minTime(a, b, n) << endl;
    return 0;
}
/*class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {    long long sumA=0,sumB=0,min=0;
        for(long long i=0;i<n; i++){
          if(i%2==0) sumA+=a[i];
            else sumA+=b[i];
        }
        for(long long i=0;i<n; i++){
          if(i%2==0) sumB+=b[i];
            else sumB+=a[i];
        }
    (sumA>sumB) ? min=sumB : min=sumA;
    return min;
    }
};
*/
