// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends



    //code
    bool findPair(int arr[], int size, int n)
{
  int i=0,j=1;
   sort(arr,arr+size);
   
   while(i<size && j <size)
   {
       if(abs(arr[i]-arr[j])==n )
           return true;
       else if(abs(arr[i]-arr[j]) <n)
           j++;
       else
           i++;
   }
   return false;  
}

/*#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    int start=0;
    int end=size-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if((arr[end]-arr[start])==n){
            return 1;

        }
        if((end[arr]-start[arr])>n){
            end--;
        }else{
            start++;
        }
    }
    return 0;
}
*/