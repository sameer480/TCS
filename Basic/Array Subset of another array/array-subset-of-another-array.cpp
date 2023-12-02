//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int arr[], int a[], int n, int m) {
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        if(map.count(arr[i])!=0){
            map[arr[i]]++;
        }else{
            map[arr[i]]=1;
        }
    }
        for(int i=0;i<m;i++){
            if(map.count(a[i])==0||map[a[i]]==0){
                return "No";
            }
            map[a[i]]--;
        }
        return "Yes";
        
            
    
}