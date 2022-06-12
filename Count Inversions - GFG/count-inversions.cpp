// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long int merge(long long arr[], long long l, long long m, long long h){
        
        long long n1 = m-l+1, n2 = h-m;
        
        long long left[n1], right[n2];
        
        for(long long i = 0;i<n1; i++)
        {
            left[i] = arr[l+i];
        }
        
        for(long long j = 0; j<n2; j++)
        {
            right[j] = arr[m+1+j];
        }
        
        long long res = 0, i = 0, j = 0, k = l;
        
        while(i<n1 && j<n2)
        {
            if(left[i] <= right[j])
            {
                arr[k++] = left[i++];
            }else{
                arr[k++] = right[j++];
                res += n1-i;
            }
        }
        
        while(i<n1){
            arr[k++] = left[i++];
        }
        
        while(j<n2){
            arr[k++] = right[j++];
        }
        
        return res;
    }
    
    
    long long int countinversion(long long arr[], long long l, long long h){
        
        long long res = 0;
        
        if(l < h){
            long long mid = (l+h)/2;
            
            res += countinversion(arr, l, mid);
            res += countinversion(arr, mid+1, h);
            res += merge(arr,l, mid, h);
        }
        
        return res;
        
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
       long long l = 0, h = N-1;
       
       return countinversion(arr, l, h);
        
        
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends