class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> ans(n);
        for (int i = 1; i <= n; i++)
        {
            int sum = 0;
            for (int j = 0; j < i; j++)
            {
                sum += arr[j];
            }
            ans[i - 1] = sum;
        }


        for (int i = 0; i < n; i++)
        {
            arr[i] = ans[i];
        }

        return arr;

    }
};