class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
         bool modified = false;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                if (modified) {
                    return false;
                } else {
                    modified = true;
                    if (i - 2 >= 0 && nums[i] < nums[i - 2]) {
                        nums[i] = nums[i - 1];
                    }
                }
            }
        }
        return true;
    }
};