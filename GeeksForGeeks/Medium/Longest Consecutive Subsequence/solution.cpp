class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        // code here
        int maxl = INT_MIN, len = 0;
        unordered_set<int>seen;
        for(int x : arr) {
            seen.insert(x);
        }
        
        for(int num : seen) {
            int x = num - 1;
            if(seen.find(x) == seen.end()) {
                len = 0;
                x = num;
                while(seen.find(x) != seen.end()) {
                    len++;
                    x++;
                }
                maxl = max(maxl, len);
            }
        }
        
        return maxl;
    }
};