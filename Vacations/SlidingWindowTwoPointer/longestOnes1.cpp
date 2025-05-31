class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            int zero = 0;

            for(int j=i;j<n;j++){
                if(nums[j]==0) zero ++;
                if(zero<=k){
                    int len = j-i+1;
                    maxLen = max(maxLen,len);
                }
                else break;
            }
        }
        return maxLen;
    }
};