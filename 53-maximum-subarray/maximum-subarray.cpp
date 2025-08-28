class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxelm = INT_MIN/10, res = INT_MIN/10;

        for(int i = 0; i < nums.size(); i++) {
            maxelm = max(nums[i], maxelm + nums[i]);

            res = max(maxelm, res);
        }

        return res;
    }
};