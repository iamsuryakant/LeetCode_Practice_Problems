class Solution {
public:
    
    void mergeSort(vector<int> &arr, int st, int end,vector<int> &temp,
                    vector<int> &ind, vector<int>&ans ){
                
                if(st >= end)
                    return;
                    
                int mid = st + (end-st)/2;
                
                mergeSort(arr, st, mid, temp, ind, ans);
                mergeSort(arr, mid+1, end, temp, ind, ans);
                
                int i = st, j = mid+1, k = st;
                int count = 0;
                
                while(i <= mid){
                    while(j <= end && arr[ind[j]] < arr[ind[i]])
                    {
                        count++;
                        temp[k++] = ind[j++];
                    }
                    
                    ans[ind[i]] += count;
                    temp[k++] = ind[i++];
                }
                
                while(j <= end)
                {
                    temp[k++] = ind[j++];
                }
                
                for(i = st; i<=end; i++)
                {
                    ind[i] = temp[i];
                }
                        
    }
    
    
    vector<int> countSmaller(vector<int>& arr) {
        int n = arr.size();
       vector<int>ans(n);
	    
	    vector<int> temp(n, 0);
	    
	    vector<int> ind;
	    
	    for(int i = 0; i<n; i++)
	    {
	        ind.push_back(i);
	    }
	    
	    mergeSort(arr, 0, n-1, temp, ind, ans);
	    
	    return ans;
    }
};