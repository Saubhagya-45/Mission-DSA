class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for (int x : nums)
            total += x;

        int curSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            // curSum is up to i not inclusive of i.
            if (curSum == total - curSum - nums[i]) {
                return i;
            }
            // updating curSum
            curSum += nums[i];
        }
        return -1;
    }
};
