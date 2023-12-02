//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[], int n) {
    if (n == 0) {
        return 0; // If the array is empty, there are no duplicates
    }

    int k = 1; // Initialize the index for the modified array with 1

    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            a[k++] = a[i]; // Overwrite the original array with unique elements
        }
    }

    return k; // Return the size of the modified array containing unique elements


        
        // code here
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends