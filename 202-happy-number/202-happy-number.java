class Solution {
    public int sum(int n){
        int sum=0;
        while(n>0){
            sum+=((n%10)*(n%10));
            n/=10;
        }
        return sum;
    }
    public boolean isHappy(int n) {
        
        Set<Integer> hash=new HashSet<>();
        hash.add(n);
        int x=sum(n);
        while(!hash.contains(sum(x))){
            x=sum(x);
            hash.add(x);
        }
        return x==1;
    }
}