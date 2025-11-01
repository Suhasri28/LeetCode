class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        vector<vector<int>>res;
        // sort(arr.begin(), arr.end());
        int i = 0, j = 0,k = 0;
        for(i = 0; i < arr.size(); i++) {
            j = i + 1;
            while(j < arr.size()) {
                k = j + 1;
                while(k < arr.size()) {
                    if(abs(arr[i] - arr[j]) <= a) {
                        if(abs(arr[j] - arr[k]) <= b) {
                            if(abs(arr[i] - arr[k]) <= c) {
                                res.push_back({arr[i], arr[j], arr[k]});
                            }
                        }
                    }
                    k++;
                }
                j++;
            }
        }

        return res.size();
    }
};