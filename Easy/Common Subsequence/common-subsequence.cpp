//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	bool commonSubseq (string a, string b)
	{
	    unordered_map<char,int>map;
	    for(int i=0;i<a.length();i++){
	        map[a[i]]++;
	    }
	    for(int i=0;i<b.length();i++){
	        if(map.find(b[i])!=map.end()){
	            return true;
	        }
	    }
	    return false;
	    // your code here
	}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--) 
	{
		string a, b; cin >> a >> b;
		Solution ob;
		cout << ob.commonSubseq (a, b) << '\n';
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends