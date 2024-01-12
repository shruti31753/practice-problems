class Solution {
public:
    int solve(vector<int>&num){
        int n = num.size();
        int prev = num[0];
        int prev2 = 0;
        for(int i=1;i<n;i++){
            int take = num[i];
            if(i>1)  take += prev2;
            int notTake = 0 + prev;
            int cur = max(take, notTake);
            prev2 = prev;
            prev = cur;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int>temp1(nums.begin(), nums.end()-1);
        vector<int>temp2(nums.begin()+1, nums.end());

        return max(solve(temp1), solve(temp2));
    }
};
