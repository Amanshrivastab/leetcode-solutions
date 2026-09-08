class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> merged;

        int i = 0, j = 0;

        // Merge both arrays
        while (i < nums1.size() && j < nums2.size()) {

            if (nums1[i] < nums2[j]) {
                merged.push_back(nums1[i]);
                i++;
            } 
            else {
                merged.push_back(nums2[j]);
                j++;
            }
        }

        // Add remaining elements of nums1
        while (i < nums1.size()) {
            merged.push_back(nums1[i]);
            i++;
        }

        // Add remaining elements of nums2
        while (j < nums2.size()) {
            merged.push_back(nums2[j]);
            j++;
        }

        int n = merged.size();

        // Odd number of elements
        if (n % 2 == 1) {
            return merged[n / 2];
        }

        // Even number of elements
        return (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
    }
};