class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        for(int i = 1; i < nums.size(); i++){
            int diff = 0;
            if(nums[i] <= nums[i-1]){
                diff = nums[i - 1] - nums[i] + 1;
                count += diff;
                nums[i] = nums[i] + diff;
            }
        }
        return count;
    }
};