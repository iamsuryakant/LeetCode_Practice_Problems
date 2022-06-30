class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();

	int incre_oper = 0, decre_oper = 0;

	sort(nums.begin(), nums.end());

// 	for (int i = 0; i < n; i++)
// 	{
// 		cout << nums[i] << " ";
// 	}

// 	cout << endl;


	for (int i = 0; i < n; i++)
	{
		// if (nums[i] != nums[i - 1])
		// {
		// 	incre_oper += nums[i - 1] - nums[1];
		// }

		incre_oper += (nums[i] - nums[0]);

	}
    
        return incre_oper;
    }
};