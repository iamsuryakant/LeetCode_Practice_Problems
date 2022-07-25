class Solution {
    
private:
    
    int firstOcc(vector<int>&arr, int target)
    {
        int l = 0, h = arr.size()-1;
       
        int ans = -1;
        
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            
            if(arr[mid] == target)
            {
                ans = mid;
                h = mid - 1;
            }
            else if(arr[mid] > target)
            {
                h = mid-1;
            }
            else if(arr[mid] < target)
            {
                l = mid+1;
            }
        }
        return ans;
    }
    
    
    int lastOcc(vector<int>&arr, int target)
    {
        int l = 0, h = arr.size()-1;
        
        int ans = -1;
        
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            
            if(arr[mid] == target)
            {
                ans = mid;
                l = mid + 1;
            }
            else if(arr[mid] > target)
            {
                h = mid-1;
            }
            else if(arr[mid] < target)
            {
                l = mid+1;
            }
        }
        return ans;
    }

    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        
        ans.push_back(firstOcc(nums, target));
        ans.push_back(lastOcc(nums, target));
        
        return ans;
    }
};