class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> B(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            //rotate
            for(int j = 0; j < nums.size(); j++) {
                B[j] = nums[(j + i) % nums.size()];
            }

            //check
            int flag = 0;
            for(int k = 0; k < nums.size() - 1; k++) {
                if(B[k] > B[k + 1]) {
                    flag = 1;
                }
            }
            if(flag == 0) {
                return true;
            }
        }

        return false;
    }
};