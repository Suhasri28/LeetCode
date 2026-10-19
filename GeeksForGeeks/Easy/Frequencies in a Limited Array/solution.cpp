class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector<int> result(arr.size());
        for(int i = 0; i < arr.size(); i++) {
            result[arr[i] - 1]++;
        }
        return result;
    }
};
