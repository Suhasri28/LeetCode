class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, h = nums.size() - 1;
        int ans = INT_MAX;
        while(l <= h) {
            int mid = l + (h - l)/2;
            if(nums[l] <= nums[mid]){
                if(ans > nums[l]){
                    ans = nums[l];
                }
                l = mid + 1;
            }
            else{
                if(nums[mid] < ans){
                    ans = nums[mid];
                }
                h = mid - 1; 
            }
        }
        return ans;
        /*while(l <= h) {
            int mid = l + (h - l)/2;
            if(nums[mid] < ans){
                ans = nums[mid];
            }
            else if(nums[l] <= nums[mid]){
                l = mid + 1;
                if(l < nums.size() && nums[l] <= ans){
                    ans = nums[l];
                    break;
                }
            }
            else{
                h = mid - 1;
                if(h >= 0 && nums[h] <= ans){
                    ans = nums[h];
                    //break;
                }
            }
        }
        return ans;*/

    }
};