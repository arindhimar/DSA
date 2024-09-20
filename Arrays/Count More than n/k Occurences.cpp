class Solution {
public:
    // Function to find the count of elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        unordered_map<int, int> freqMap;
        int count = 0;
        int threshold = n / k;

        // Count occurrences of each element
        for (int i = 0; i < n; i++) {
            freqMap[arr[i]]++;
        }

        // Count elements that appear more than n/k times
        for (auto &entry : freqMap) {
            if (entry.second > threshold) {
                count++;
            }
        }

        return count;
    }
}