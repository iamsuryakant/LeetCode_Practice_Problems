// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
// int isPatternDist(string s1, string s2)
// {
// 	int n = s1.length();
// 	int m = s2.length();

// 	for (int i = 0; i <= n - m;)
// 	{
// 		int j = 0;

// 		for (; j < m; j++)
// 		{
// 			if (s2[j] != s1[i + j]) {
// 				break;
// 			}
// 		}

// 		if (j == m)
// 		{
// 			return i;
// 		//	break;
// 		}

// 		if (j == 0)
// 		{
// 			i++;
// 		} else {
// 			i = i + j;
// 		}
// 	}
// }
int strstr(string s1, string s2)
{
     //Your code here
     
    int n = s1.length();
	int m = s2.length();

	for (int i = 0; i < n; i++)
	{
	    string sub = s1.substr(i, m);
	    
	    if(sub == s2)
	    {
	        return i;
	    }
	}
	return -1;
}