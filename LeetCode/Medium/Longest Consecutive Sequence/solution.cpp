class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>seen(nums.begin(), nums.end());
        int maxl = 0, len = 0, num = 0;
        for(int x : seen) {
            num = x - 1;
            len = 0;
            if(seen.find(num) == seen.end()) {
                num = x;
                while(seen.find(num) != seen.end()) {
                    len++;
                    num = num + 1;
                }
            }
            maxl = max(maxl, len);
        }
        return maxl;
    }
};