class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n, -1);
        int w = 2*k+1;

        if(n < w){
            return ans;
        }

        vector<long long> prefixSum(n+1);
        for(int i = 0; i < n; i++){
            prefixSum[i+1] = prefixSum[i] + nums[i];
        }

        for(int i = k; i + k < n; ++i){
            ans[i] = (prefixSum[i+k+1] - prefixSum[i-k])/w;
        }
        return ans;

        // if(n < k+k+1){
        //     return ans;
        // }
        // if(n == 1 && k == 0){
        //     return nums;
        // }

        // for(int i = k; i < n-k; i++){
        //     // int temp = 0;
        //     // for(int j = i-k; j < k; j++){
        //     //     temp += nums[j];
        //     // }
        //     long long temp2 = 0;
        //     for(int j = i-k; j <= i+k; j++){
        //         temp2 += nums[j];
        //     }
        //     double avg = static_cast<double>((temp2)/(k+k+1));
        //     ans[i] = static_cast<int>(avg);
        // }
        // return ans;
    }
};
