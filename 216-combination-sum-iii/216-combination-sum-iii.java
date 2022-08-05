class Solution {
    public static void find(int k,int n,List<List<Integer>> ans,List<Integer> curr,int sum,int j){
        
        if(curr.size()==k){
            if(n==sum)
                ans.add(new ArrayList<>(curr) );
            return;
        }
        for(int i=j;i<=9;i++){ 
            sum+=i;
            curr.add(i);
            find(k,n,ans,curr,sum,i+1);
            curr.remove(curr.size()-1);
            sum-=i;
            // find(k,n,ans,curr,sum,i+1);
        }
        
    }
    public List<List<Integer>> combinationSum3(int k, int n) {
        
        List<Integer> li=new ArrayList<>();
        List<List<Integer>> ans=new ArrayList<>();
        find(k,n,ans,li,0,1);
        
        return ans;
        
    }
}