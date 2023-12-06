//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
 // Include the algorithm header for the swap function

//#include <algorithm> // Include the algorithm header for the swap function

class Solution{
    public:
    int shouldPunish (int roll[], int marks[], int n, double avg)
    {
        // your code here
        int sum = 0, swaps = 0;
        for(int i=0; i<n; i++){
            sum += marks[i];
        }
        
        for(int i=0; i<n-1; i++){
           for(int j=0; j<n-i-1; j++){
               if(roll[j] > roll[j+1]){
                   swap(roll[j], roll[j+1]);
                   swaps++;
               }
           }
        }
        
        int fakeAvg = (sum - swaps) / n;
        return (fakeAvg >= avg) ? 1 : 0;
    }
};

//{ Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		double avg; cin >> avg;

		int roll[n];
		int marks[n];

		for (int i = 0; i < n; ++i)
			cin >> roll[i];
		for (int i = 0; i < n; ++i)
			cin >> marks[i];
        Solution ob;
		cout << ob.shouldPunish (roll, marks, n, avg) << endl;
	}
}

// } Driver Code Ends