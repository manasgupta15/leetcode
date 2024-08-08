class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result(m + n);  // Create a result vector of size m + n
        int i = 0, j = 0, k = 0;

        // Merge the two arrays into result
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                result[k++] = nums1[i++];
            } else {
                result[k++] = nums2[j++];
            }
        }

        // Add the remaining elements from nums1, if any
        while (i < m) {
            result[k++] = nums1[i++];
        }

        // Add the remaining elements from nums2, if any
        while (j < n) {
            result[k++] = nums2[j++];
        }

        // Copy the merged result back to nums1
        for (int i = 0; i < m + n; ++i) {
            nums1[i] = result[i];
        }
    }
};
