class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0, j = 0, max_count = 0, count = 0;
        while(j < nums.size()) {
            if(nums[j] == 1) {
                count++;
            }
            else {
                max_count = max(count, max_count);
                count = 0;
            }
            j++;
        }
        max_count = max(count, max_count);
        return max_count;
    }
};