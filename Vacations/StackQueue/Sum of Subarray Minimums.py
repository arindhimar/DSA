class Solution(object):
    def sumSubarrayMins(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        MOD = 10**9 + 7
        n = len(arr)
        total_sum = 0        
        for i in range(n):
            current_min = arr[i]
            for j in range(i, n):
                current_min = min(current_min, arr[j])
                total_sum = (total_sum + current_min) % MOD
        
        return total_sum
