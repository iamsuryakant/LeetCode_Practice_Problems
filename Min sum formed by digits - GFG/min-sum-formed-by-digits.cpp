// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        // Your code goes here
        if(n == 1)
        {
            return arr[n-1];
        }
        
        if(n == 0)
            return 0;
            
        sort(arr, arr+n);
        
        long long int a1 = 0, a2 = 0;
        
        for(int i = 0; i< n; i++)
        {
            if(i%2 == 0)
            {
               a1 = (a1*10 + arr[i]);
            }else{
                a2 = (a2*10 + arr[i]);
            }
        }
        
       return a1+a2;
        
        //return 0;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends