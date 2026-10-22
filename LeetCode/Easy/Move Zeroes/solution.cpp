class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                count++;
            }
        }
        int zero = 0;
        while(i < nums.size()) {
            if(nums[i] != 0) {
                i++;
            }
            else {
                zero++;
                for(int j = i; j < nums.size() - 1; j++) {
                    swap(nums[j], nums[j + 1]);
                }
                if(zero == count) {
                    break;
                }
            }
        }
    }
};