class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        int n = nums.size();

        int incre_oper = 0, decre_oper = 0;

        sort(nums.begin(), nums.end());

        // for (int i = 0; i < n; i++)
        // {
        // 	cout << nums[i] << " ";
        // }

        // cout << endl;
        int l = 0, r = n - 1;
        int midd = nums[(l + r) >> 1];

        //return mid;

        for (int i = 0; i < n; i++)
        {
            incre_oper += abs(midd - nums[i]);
        }

        return incre_oper;
        
    }
};