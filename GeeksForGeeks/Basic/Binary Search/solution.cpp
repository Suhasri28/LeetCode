class Solution {
  public:
    int binarySearch(vector<int>& arr, int k) {
        // code here
        int l = 0, h = arr.size() - 1;
        while(l <= h) {
            int mid = l + (h - l) / 2;
            if(arr[mid] == k) {
                return mid;
            }
            else if(arr[mid] < k) {
                l = mid + 1;
            }
            else {
                h = mid - 1;
            }
        }
        
        return -1;
    }
};