//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    
	    ll first = 1;
	    ll second = 2;
	    ll temp;
	    int mod = 1e9+7; // 10^9 + 7
	    
	    for(int i=2; i<=n; i++){
	        
	        temp = (first + second) % mod;
	        first = second;
	        second = temp;
	    }
	    
	    return second;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends