//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
     int n = arr.size();
    if (n == 1) return 0;  // If there's only one tower, no difference can be minimized.

    // Step 1: Sort the array
    sort(arr.begin(), arr.end());

    // Step 2: Initialize result as the current difference between the largest and smallest
    int result = arr[n - 1] - arr[0];

    // Step 3: Set initial smallest and largest after considering k addition/subtraction
    int smallest = arr[0] + k;
    int largest = arr[n - 1] - k;

    // Step 4: Traverse the sorted array and minimize the range
    for (int i = 0; i < n - 1; i++) {
        int minElem = min(smallest, arr[i + 1] - k);  // Consider reducing the next element
        int maxElem = max(largest, arr[i] + k);       // Consider increasing the current element
        
        // Only update result if minElem is non-negative (to avoid negatives)
        if (minElem >= 0) {
            result = min(result, maxElem - minElem);  // Update result with the minimal range found
        }
    }

    return result;     // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends