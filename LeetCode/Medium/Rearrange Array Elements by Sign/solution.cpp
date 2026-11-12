class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;
        vector<int> result;
        for(int x : nums) {
            if(x > 0) {
                positive.push_back(x);
            }
            else {
                negative.push_back(x);
            }
        }
        int k = 0, z = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0) {
                result.push_back(positive[k++]);
            }
            else{
                result.push_back(negative[z++]);
            }
        }

        return result;
    }
};