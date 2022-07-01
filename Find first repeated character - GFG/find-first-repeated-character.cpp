// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    //int count = 0;
    string ans;
    
    bool flag = false;
    
    int count[256] = {0};
    
    for(int i = 0; i<s.length(); i++)
    {
        count[s[i]]++;
        
        if(count[s[i]] > 1)
        {
            ans += s[i];
            flag = true;
            break;
        }
    }
    
    // for(int i = 0; i<s.length(); i++)
    // {
    //     if(count[s[i]-'a'] > 1)
    //     {
    //         ans += s[i];
    //         flag = true;
    //         break;
    //     }
    // }
    
    if(flag)
    {
        return ans;
    }
    
    return "-1";
    
    // if(!flag){
    //     return "-1";
    // }
}