class Solution {
public:

    string buildString(vector<int> &row){
        string str = "";
        for(int i = 0; i < row.size(); i++){
            str += to_string(row[i]);
            str += '#';
        }
        return str;
    }

    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string, int> mp;
        for(vector<int> row : grid){
            mp[buildString(row)]++;
        }

        int ans = 0;

        for(int i = 0; i < grid[0].size(); i++){
            string result = "";
            for(int j = 0; j < grid.size(); j++){
                result += to_string(grid[j][i]);
                result += '#';
            }
            ans += mp[result];
        }
        return ans;
    }
};
