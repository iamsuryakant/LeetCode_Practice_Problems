// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
       //int n=s.length();
       stack<string>st;
       //reverse(s.begin(), s.end());
       string word = "";
      
       for(int i=0; i<s.size(); i++)
       {
           if(s[i]=='.')
           {
              st.push(word);
              st.push(".");
              word = "";
           }else{
               word += s[i];
           }
           
       }
        st.push(word);
        string ans= "";   
           int i = 0;
           int n = st.size();
           while(i < n){
               string top = st.top();
               st.pop();
               ans += top;
               i++;
           }
       //sort(s.begin(), s.end());

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
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends