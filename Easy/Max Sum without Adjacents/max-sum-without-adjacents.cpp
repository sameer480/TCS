//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	


int solve(int *arr, int i, int n, vector<int> &v) {
    if (i >= n) {
        return 0;
    }
    if (v[i] != -1) {
        return v[i];
    }
    int inc = arr[i] + solve(arr, i + 2, n, v);
    int exc = solve(arr, i + 1, n, v);
    return v[i] = max(inc, exc);
}

// calculate the maximum sum without adjacent
int findMaxSum(int *arr, int n) {
    vector<int> v(n, -1);
    return solve(arr, 0, n, v);
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends