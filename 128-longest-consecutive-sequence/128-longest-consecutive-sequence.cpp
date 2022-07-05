class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int>st;
        int ans = 0;

        for (int i = 0; i < arr.size(); i++)
            st.insert(arr[i]);

        for (int i = 0; i < arr.size(); i++)
        {
            int curr = arr[i];
            int count = 1;
            if (st.count(curr - 1) == 0)
            {
                while (st.count(curr + 1)) {
                    curr++;
                    count++;
                }
                ans = max(ans, count);
            }

        }

       return ans;
        
    }
};