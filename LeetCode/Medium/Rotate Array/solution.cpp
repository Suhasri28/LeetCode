class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> B(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            B[(i + k) % nums.size()] = nums[i];
        }
        nums = B;
    }
};