class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> vec;
        for (int i = 0; i < n; i++) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = vec[i - 1][j] + vec[i - 1][j - 1];
            }
            vec.push_back(row);
        }
        return vec;
    }
};