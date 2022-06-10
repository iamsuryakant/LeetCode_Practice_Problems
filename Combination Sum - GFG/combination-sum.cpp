// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    vector<vector<int>> result;
    void help(int index, vector<int>& A, int B, vector<int>& p) {
        if (B < 0)
            return;
        if (index == A.size()) {
            if (B == 0)
                result.push_back(p);
            return;
        }
        p.push_back(A[index]);
        help(index, A, B - A[index], p);
        p.pop_back();
        help(index + 1, A, B, p);
    }
    
    vector<vector<int>> combinationSum(vector<int> &A, int B) {
        sort(A.begin(), A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        vector<int> p;
        help(0, A, B, p);
        return result;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends