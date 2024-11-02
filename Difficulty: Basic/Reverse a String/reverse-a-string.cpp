//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        int len= s.size();
    int j= len-1;
    int i=0;
    while(i<j){
        char s1=s[i];
        s[i]=s[j];
        s[j]=s1;
        i++;
        j--;
    }
    return s;
        // Your code goes here
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseString(s) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends