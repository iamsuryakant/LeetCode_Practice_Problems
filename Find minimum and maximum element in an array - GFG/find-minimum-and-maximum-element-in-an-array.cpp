// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    
    int maximum = max(a[0],a[1]);
   int minimum = min(a[0],a[1]);
   for(int i = 2;i<n;i++){
       if(a[i]<minimum){
           minimum = a[i];
       }
       if(a[i]>maximum){
           maximum = a[i];
       }
   }
   return {minimum, maximum};
    
}