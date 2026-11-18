class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //unordered_map<int, int> map; with the same index you can store only one pair
        vector<pair<int, int>> map;

        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == 0) {
                    map.push_back({i,j});
                }
            }
        }

        for(pair it : map) {
            int i = it.first;
            int j = it.second;
            for(int k = 0; k < matrix[0].size(); k++) {
                matrix[i][k] = 0;
            }
            for(int k = 0; k < matrix.size(); k++) {
                matrix[k][j] = 0;
            }
        }
    }
};