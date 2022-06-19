// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int calc(int arr[], int n, vector<int>&dp)
	{
	    if(n < 0){
	        return 0;
	    }
	    
	    if(n == 0)
	    {
	        return arr[0];
	    }
	    
	    if(dp[n] != -1){
	        return dp[n] ;
	    }
	    
	    //picking condition
	    
	    int inclu = calc(arr, n-2, dp) + arr[n];
	    int ex = calc(arr, n-1, dp);
	    
	    
	    return dp[n] = max(inclu, ex);
	    
	}
	int findMaxSum(int *arr, int n) {
	    // code here
	   // int ans = 0;
	   // int res = 0;
	    
	    vector<int>dp(n+1, -1);
	    
	   return  calc(arr, n-1, dp);
	    
	    //return dp[n];
	    
	}
};

// { Driver Code Starts.

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
}  // } Driver Code Ends