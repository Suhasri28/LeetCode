class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> res;
        set<int> seen;
        int i = 0, j = 0;
        while(i < a.size() && j < b.size()) {
            if(a[i] < b[j]) {
                if(seen.find(a[i]) == seen.end()) {
                    seen.insert(a[i]);
                    res.push_back(a[i]);
                }
                i++;
            }
            else {
                if(seen.find(b[j]) == seen.end()) {
                    seen.insert(b[j]);
                res.push_back(b[j]);   
                }
                j++;
            }
        }
        while(i < a.size()) {
            if(seen.find(a[i]) == seen.end()) {
                    seen.insert(a[i]);
                    res.push_back(a[i]);
                }
                i++;
        }
        while(j < b.size()) {
            if(seen.find(b[j]) == seen.end()) {
                    seen.insert(b[j]);
                res.push_back(b[j]);   
                }
                j++;
        }
        
        return res;
    }
};