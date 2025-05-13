class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;    // Pointer for the last element in nums1 (m valid elements)
        int j = n - 1;    // Pointer for the last element in nums2
        int k = m + n - 1;  // Pointer for the last index in nums1 (total size)

    // Merge nums1 and nums2 from the back to avoid overwriting
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

    // If any elements are left in nums2, copy them
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
