class Solution {
    public int furthestBuilding(int[] heights, int bricks, int ladders) {
        
        PriorityQueue<Integer> pq=new PriorityQueue<>();
        int c1=0;
        for(int i=1;i<heights.length;i++){
            int diff=heights[i]-heights[i-1];
            if(diff<=0)
                continue;
            pq.add(diff);
            if(pq.size()<=ladders)
                continue;
            else{
                if(pq.peek()>bricks)
                    break;
                else{
                    bricks-=pq.poll();
                    c1++;
                }
            }
        }
       c1+=ladders;
        int c=0;
      for(int i=0;i<heights.length-1;i++){
          int diff=heights[i]-heights[i+1];
         if(diff>=0)
             c++;
          else{
              if(c1<=0)
                  break;
              c1--;
              c++;
          }
      } 
        return c;
    }
}