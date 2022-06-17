// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        int sum1 = 0, sum2 = 0;
        
       
        
        for(int i = 0; i<n; i++){
            sum1 += A[i];
        }
        
        for(int j = 0; j<m; j++){
            sum2 += B[j];
        }
            
        sort(A, A+n);
        sort(B, B+m);
            
        
        int i = n-1, j = m-1;
        
        while(i >= 0 && j >= 0){
            
            int check1 = sum1 - A[i] + B[j];
            int check2 = sum2 - B[j] + A[i];
            
            if(check1 == check2){
                return 1;
            }
            
            if(check1 > check2)
            {
               j--;
            }else{
                i--;
            }
        }
        
        return -1;
	}
 

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends