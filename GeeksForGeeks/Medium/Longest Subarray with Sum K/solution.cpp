class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int len = 0;
        unordered_map<int, int> map;
        map[0] = -1;
        int ps = 0;
        for(int j = 0; j < arr.size(); j++) {
            ps += arr[j];
            int num = ps - k;
            if(map.find(num) != map.end()) {
                int length = j - map[num];
                len = max(len, length);
            }
            if(map.find(ps) == map.end()){
                map[ps] = j;
            }
        }
        
        return len;
    }
};