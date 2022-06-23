class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b){
        return a[1]<b[1];
    }
    
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),comp);
        int time=0,n=courses.size();
        priority_queue<int> pq;
        for(int i=0;i<n;++i){
            time+=courses[i][0];
            pq.push(courses[i][0]);
            if(time>courses[i][1]){
                time-=pq.top();
                pq.pop();
            }
        }
        return pq.size();
    }
};