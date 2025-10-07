class Solution {
public:
    bool check(vector<int>& nums) {
        int flag = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                flag = 1;
                reverse(nums.begin(), nums.begin() + i + 1);
                reverse(nums.begin() + i + 1, nums.end());
                break;
            }
        }
        // for(int i = 0; i < nums.size(); i++){
        //     cout<<nums[i];
        // }
        if(flag == 0) 
            return true;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] < nums[i + 1]) {
                return false;
                break;
            }
        }

        return true;
    }
};