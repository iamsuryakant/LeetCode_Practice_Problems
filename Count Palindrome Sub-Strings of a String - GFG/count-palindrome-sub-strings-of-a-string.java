// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;


class GfG
{
    public static void main(String args[])
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    int N=sc.nextInt();
                    String S=sc.next();
                        
                    Solution obj = new Solution();
                    
                    
                    System.out.println(obj.CountPS(S,N));
                    
                }
                
        }
}// } Driver Code Ends


//User function Template for Java

class Solution
{
    
    public int odd(String s,int i){
        int count=0;
        int n=s.length();
        int l=1;
        int r=1;
        while((i+r)<n && (i-l)>=0 && s.charAt(i-l)==s.charAt(i+r)){ 
            count++;
            l++;
            r++;
        }
        return count;
        
    }
    
     public int even(String s,int i){
        int count=0;
        int n=s.length();
         int l=0;
         int r=1;
        while((i+r)<n && (i-l)>=0 && s.charAt(i-l)==s.charAt(i+r)){ 
            l++;
            r++;
            count++;
        }
        return count;
        
    }
    
    
    
    
    public int CountPS(String s, int N)
    {
        //code here
            // int ans=s.length();
            int ans = 0;
            for(int i=0;i<N;i++){
                ans+=(odd(s,i)+even(s,i));
                
            }
            return ans;
    }
}