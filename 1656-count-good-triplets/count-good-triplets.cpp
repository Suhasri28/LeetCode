class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        vector<vector<int>>res;
        // sort(arr.begin(), arr.end());
        int i = 0, j = 0,k = 0;
        for(i = 0; i < arr.size(); i++) {
            j = i + 1;
            for(;j < arr.size(); j++) {
                k = j + 1;
                for(; k < arr.size(); k++) {
                    if(abs(arr[i] - arr[j]) <= a) {
                        if(abs(arr[j] - arr[k]) <= b) {
                            if(abs(arr[i] - arr[k]) <= c) {
                                res.push_back({arr[i], arr[j], arr[k]});
                            }
                        }
                    }
                }
            }
        }

        return res.size();
    }
};