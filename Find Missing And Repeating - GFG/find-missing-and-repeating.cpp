// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        // int n = array.size() + 1;
        
        int *an = new int[2];

        int miss = 0, repeat = 0;
    
        for (int i = 0; i < n; ++i)
        {
            if(arr[abs(arr[i])-1] > 0)
                arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
                
            else
                repeat = abs(arr[i]);
        }
        
        for (int i = 0; i < n; ++i)
        {
            if(arr[i] > 0)
                miss = i+1;  
        }
        
        an[0] = repeat;
        an[1] = miss;
        
        return an;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends