class Solution {
    
    public boolean pali(String s, int st, int end)
    {
        while(st<end)
        {
            if(s.charAt(st) != s.charAt(end))
                return false;
            st++;
            end--;
        }
        return true;
    }
    
    public boolean validPalindrome(String s) {
       // int count=1;
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(s.charAt(i)!=s.charAt(j)){
                if(pali(s, i+1, j)){
               
                    // count=2;
                    // i+=2;
                    // j--;
                    return true;
                }
                
                if(pali(s, i, j-1)){
                    // i++;
                    // j=j-2;
                    // count=2;
                    return true;
                }
                // else
                return false;
            }
            else {
                i++;
                j--;
                //continue;
            }
//             else{
           
//              return false;
                
//             }
        } 
        return true;
    }
}