class Solution {
public:
    void sortColors(vector<int>& arr) {
        int c0 = 0, c1 = 0, c2 = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == 0) {
                c0++;
            }
            else if(arr[i] == 1) {
                c1++;
            }
            else {
                c2++;
            }
        }

        int i = 0, j = 0;
        while(j < arr.size()) {
            if(arr[j] != 2) {
                swap(arr[i], arr[j]);
                i++;
            }
            j++;
        }

        i = 0, j = 0;
        while(j < arr.size() - c2) {
            if(arr[j] != 1) {
                swap(arr[i], arr[j]);
                i++;
            }
            j++;
        }
    }
};