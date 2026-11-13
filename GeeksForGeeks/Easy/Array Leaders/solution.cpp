class Solution {
  public:
    vector<int> leaders(vector<int>& nums) {
        // code here
        vector<int>result;
        result.push_back(nums[nums.size() - 1]);
        for(int i = nums.size()-2; i >= 0; i--) {
            if(nums[i] >= result.back()) {
                result.push_back(nums[i]);
            }
        } 
        reverse(result.begin(), result.end());
        return result;
    }
};