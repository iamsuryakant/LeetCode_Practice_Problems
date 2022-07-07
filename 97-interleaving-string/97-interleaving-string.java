class Solution {
    
    public boolean find(String s1,String s2,String s3,int i,int j,int k,Boolean res[][]){
        if(i<0 && j<0 && k<0)
            return true;
       if(i>=0 && j>=0 && res[i][j]!=null)
           return res[i][j];
        
        if( ( i>=0 &&s1.charAt(i)==s3.charAt(k) )
             && ( j>=0 &&s2.charAt(j)==s3.charAt(k)) )
           return res[i][j]= ( find(s1,s2,s3,i-1,j,k-1,res) || find(s1,s2,s3,i,j-1,k-1,res) );
        
       else if( i>=0 &&  s1.charAt(i)==s3.charAt(k))
           return   find(s1,s2,s3,i-1,j,k-1,res);
        else if( j>=0  && s2.charAt(j)==s3.charAt(k))
           return  find(s1,s2,s3,i,j-1,k-1,res);
       
else
        return false;
        
    }
    public boolean isInterleave(String s1, String s2, String s3) {
        int i=s1.length();
        int j=s2.length();
        int k=s3.length();
        if( (i+j)!=k)
            return false;
        Boolean res[][]=new Boolean[i+1][j+1];
        return find(s1,s2,s3,i-1,j-1,k-1,res);
    }
}