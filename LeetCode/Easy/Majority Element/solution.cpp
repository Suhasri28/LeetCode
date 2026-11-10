class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;

        for(int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        int num = 0, freq = 0;
        for(auto it : map) {
            if(it.second > freq) {
                num = it.first;
                freq = it.second;
            }
        }

        return num;
    }
};