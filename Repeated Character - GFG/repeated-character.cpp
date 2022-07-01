// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    char firstRep (string s)
    {
        //code here.
        int n = s.length();
        bool flag = false;
        int count[256] = {0};
        char ans = '#';
        for(int i =0; i<n; i++)
        {
            count[s[i]-'a']++;
        }
        
        for(int i = 0;i<n; i++)
        {
            if(count[s[i]-'a'] >= 2)
            {
                ans = s[i];
               // flag = true;
                break;
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}


  // } Driver Code Ends