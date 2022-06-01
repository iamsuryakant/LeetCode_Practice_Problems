class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        
        int n = arr.size();
        
        for(int i = 1; i<n; i++)
            arr[i] += arr[i-1];
        
        return arr;

    }
};