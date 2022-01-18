// { Driver Code Starts
//https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1?fbclid=IwAR05N0cJDnsidIU4dXEIzej9sogP_pT2yujTsTQQVDEMEFSB5baC0UYt0fc
#include <iostream>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        int totalSum=0;
        int leftSum=0;
        // Your code here
        for (int i = 0; i < n; i++)
            totalSum+=a[i];
        
        for (int i = 0; i < n; i++)
        {
           totalSum-=a[i];
           if(leftSum==totalSum){
            return i;
            }else{
                leftSum+=a[i];
            }
        }  
       return -1; 
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends