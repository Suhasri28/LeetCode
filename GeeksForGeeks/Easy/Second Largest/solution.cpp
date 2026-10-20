class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max_element = -1, ans = -1;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > max_element) {
                ans = max_element;
                max_element = arr[i];
            }
            else if(arr[i] != max_element && arr[i] > ans) {
                ans = arr[i];
            }
        }
        return ans;
    }
};