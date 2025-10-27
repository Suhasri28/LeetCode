class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elmt = nums[0], sum = 0;

        for(auto num : nums) {
            if(sum == 0 ){
                elmt = num;
                sum += 1;
            }
            else if(num != elmt){
                sum -= 1;
            }
            else{
                sum += 1;
            }
        }
        // cout<<elmt;

        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == elmt) {
                count++;
            }
        }

        if(count >= (nums.size()/2)) {
            return elmt;
        }
        return -1;
    }
};