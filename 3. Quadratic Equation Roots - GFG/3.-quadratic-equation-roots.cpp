// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        vector<int> res;
        
        double d = sqrt(b*b - 4*a*c);
        // x1 = 0, x2 = 0;
        
        if(d >= 0){
            
           double x1 = (floor((-b + d)/(2.0*a)));
            double x2 = (floor((-b - d)/(2.0*a)));
            
           if(x1 >= x2){
                 
                res.push_back(x1);
                res.push_back(x2);
           }
           else{
                res.push_back(x2);
                res.push_back(x1);
           }
        }
        else 
        {
           res.push_back(-1); 
           
        }
        
        
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends