//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if(n<=1){
            return 0;
        }
        if(arr[0]==0){
            return -1;
        }
        int jump=1;
        int step=arr[0];
        int maxr=arr[0];
        for(int i=1;i<n;i++){
            if(i==n-1){
                return jump;
            }
            maxr= max(maxr,i+arr[i]);
            step--;
            if(step==0){
                jump++;
                if(i>=maxr){
                    return -1;
                }
                step= maxr-i;
            }
        }
        return -1;
        // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends