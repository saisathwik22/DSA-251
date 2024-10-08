class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while(low<=high) {
            int mid = (low+high) / 2;
            if(nums[mid] == target) return mid;
            else if(target > nums[mid]) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};

//Recursive : O(log(n))
class Solution {
public:
    
    int solve(vector<int>& nums, int l, int r, int target) {
        if(l > r)
            return -1;
        
        int mid = l + (r-l)/2;
        
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            return solve(nums, mid+1, r, target);
        else
            return solve(nums, l, mid-1, target);
    }
    
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        
        return solve(nums, 0, n-1, target);
    }
};
