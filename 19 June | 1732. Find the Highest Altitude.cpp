class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> ans(n+1,0);
        
        for(int i = 0; i < n; i++){
            // ans[1] = gain[0];
            int temp = gain[i] + ans[i];
            ans[i+1] = temp;
        }
        // sort(ans.begin(), ans.end());
        int m = INT_MIN;
        for(int i = 0; i < n+1; i++){
            m = max(m, ans[i]);
        }
        // return ans[n-1];
        return m;
    }
};
