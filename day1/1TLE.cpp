#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v){
    
    for(int value:v)
    cout<<value<<" ";
    cout<<endl;
}
void  clockwiseRotate(vector<int> &v,int d){
    int size=v.size();
    while(d--){ 
    int temp=v[0];
    for(int j=0;j<v.size()-1;j++) 
        v[j]=v[j+1];
        v[size-1]=temp;
}
}
int main(){
    int t;cin>>t;
    while(t--){
    int n,d;
    cin>>n>>d;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);

    }
    clockwiseRotate(v,d);
    printVector(v);
    }
    return 0;
}
/*
Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

Input:
The first line of the input contains T denoting the number of testcases. First line of each test case contains two space separated elements, N denoting the size of the array and an integer D denoting the number size of the rotation. Subsequent line will be the N space separated array elements.

Output:
For each testcase, in a new line, output the rotated array.

Constraints:
1 <= T <= 200
1 <= N <= 10e7
1 <= D <= N
0 <= arr[i] <= 10e5

Example:
Input:
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20

Output:
3 4 5 1 2
8 10 12 14 16 18 20 2 4 6

Explanation :
Testcase 1: 1 2 3 4 5  when rotated by 2 elements, it becomes 3 4 5 1 2

*/