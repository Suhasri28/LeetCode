class Solution {
  public:
    int majorityElement(vector<int>& nums) {
        // code here
        int elmt = nums[0], count = 0;
                for(int x : nums) {
                    if(x == elmt) {
                        count++;
                    }
                    else {
                        count--;
                        if(count == 0) {
                            elmt = x;
                            count++;
                        }
                    }
                }

                // return elmt;

                //if a majority element doesn't exist
                count = 0;
                for(int x : nums) {
                    if(x == elmt) {
                        count++;
                    }
                }

                return count > nums.size() / 2 ? elmt : -1 ;
    }
};