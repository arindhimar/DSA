class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen = 0;
        int n = nums.size();
        int l=0,r=0,zero=0;

        while(r<n){
            if(nums[r]==0) zero++;

            while(zero>k){
                if(nums[l]==0) zero--;
                l++;

            }
                            if(zero<=k){
                    int len = r-l+1;
                    maxLen = max(len,maxLen);
                }
                r++;

        }

        return maxLen;
    }
};