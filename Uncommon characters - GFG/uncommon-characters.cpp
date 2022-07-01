// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
       string UncommonChars(string A, string B)
{
	// code here
	        set<char>s1;
            set<char>s2;
            string str="";
            for(auto x:A){
                s1.insert(x);
            }
            for(auto x:B){
                s2.insert(x);
            }
            for(auto x:s1){
                str.push_back(x);
            }
            for(auto x:s2){
                str.push_back(x);
            }
            map<char,int>mp;
            for(int i=0;i<str.size();i++){
                mp[str[i]]++;
            }
            string ans="";
            for(auto x:mp){
                if(x.second==1){
                    ans.push_back(x.first);
                }
            }
            if(ans.size()==0) return "-1";
            return ans;
}
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends