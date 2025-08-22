class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int result = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if(abs(result) > abs(nums[i]) || (abs(result) == abs(nums[i]) && nums[i] > result)) {
                result = nums[i];
            }
        }
        return result;
    }
};