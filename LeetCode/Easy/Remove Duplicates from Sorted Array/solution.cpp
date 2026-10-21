class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        int i = 0;

        while (i < nums.size()) {
            if (seen.find(nums[i]) != seen.end()) {
                for (int j = i; j < nums.size() - 1; j++) {
                    nums[j] = nums[j + 1];
                }
                nums.pop_back();
            } else {
                seen.insert(nums[i]);
                i++;
            }
        }

        return nums.size();
    }
};