class Solution {
  public:
    void rearrange(vector<int> &nums) {
        // code here
        vector<int> result;
        int neg = 0, pos = 0;
        for(int x : nums) {
            if(x < 0) {
                neg++;
            }
            else {
                pos++;
            }
        }
        
        int i = 0, j = 0, pcount = 0, ncount = 0;
            while(pcount < pos && ncount < neg){
                while(i < nums.size() && nums[i] < 0) {
                    i++;
                }
                result.push_back(nums[i]);
                i++;
                pcount++;
                while(j < nums.size() && nums[j] >= 0) {
                    j++;
                }
                result.push_back(nums[j]);
                j++;
                ncount++;
            }
            
            while (pcount < pos) {
                while (nums[i] < 0) i++;
                result.push_back(nums[i++]);
                pcount++;
            }

            while (ncount < neg) {
                while (nums[j] >= 0) j++;
                result.push_back(nums[j++]);
                ncount++;
            }
            
        nums = result;
    }
};