class Solution {
public:
    int candy(vector<int>& ratings) {
        
        int n=ratings.size();
        int L2R[n];
        int R2L[n];
        
        for(int i=0;i<n;i++)
            L2R[i]=R2L[i]=1;
        
        for(int i=1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
                L2R[i]=L2R[i-1]+1;
        }
        
        
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
                R2L[i]=R2L[i+1]+1;
        }
        
        int res[n];
        
        for(int i=0;i<n;i++)
        {
            res[i]=max(L2R[i],R2L[i]);
        }
        int ans=accumulate(res,res+n,0);
        return ans;
    }
};