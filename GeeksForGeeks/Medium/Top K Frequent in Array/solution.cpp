class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
        unordered_map<int, int> map;
        for(int i = 0; i < arr.size(); i++) {
            map[arr[i]]++;
        }
        
        vector<pair<int, int>> res;
        for(pair<int, int> c : map) {
            res.push_back(c);
        }
        
        sort(res.begin(), res.end(),[] (const pair<int, int> &a, const pair<int, int> &b){
         if(a.second == b.second) {
             return a.first > b.first;
         }   
         return a.second > b.second;
        });
        
        
        vector<int>ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(res[i].first);
        }
        
        return ans;
    }
};
