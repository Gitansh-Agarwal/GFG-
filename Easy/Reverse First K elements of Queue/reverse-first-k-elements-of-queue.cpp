//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        
        //!st Method = Using Vector
        // vector<int> temp;
        // for(int i=0; i<k; i++){
        //     temp.push_back(q.front());
        //     q.pop();
        // }
        // for(int i=k-1; i>=0; i--){
        //     q.emplace(temp[i]);
        // }
        // for(int i=0; i<q.size()-k; i++){
        //     q.emplace(q.front());
        //     q.pop();
        // }
        // return q;
        
        // OR
        
        // Using Stack
        
        stack<int> st;
        int n=q.size();
        
        while(k--){
            st.push(q.front());
            q.pop();
            n--;
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        while(n--){
            int x = q.front();
            q.pop();
            q.push(x);
        }
        return q;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends