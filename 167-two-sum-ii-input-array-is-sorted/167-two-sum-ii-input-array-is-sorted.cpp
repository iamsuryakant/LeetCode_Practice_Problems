class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        
        int l = 0, h = arr.size()-1;
        //vector<int>v;
        //int mid;
        
        while(arr[l]+ arr[h] != target)
        {
            if((arr[l] + arr[h]) > target){
                h--;
            }
            else{
                l++;
            }
        }
        return vector<int>({l+1,h+1});
    }
};