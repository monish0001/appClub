                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
// using reverse() in STL

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
	// Get the vector
	vector<int> a;
    int n,d;cin>>n>>d;
	// input the vector
	
	for (int i = 0; i < n; i++){
        int x;cin>>x;
        a.push_back(x);
    }
	// rotate the vector
	reverse(a.begin(), a.begin()+d);
    reverse(a.begin()+d, a.end());
    reverse(a.begin(), a.end());

	// Print the rotate vector
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
    }
	return 0;
}
