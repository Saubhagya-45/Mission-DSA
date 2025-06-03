class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cr=0;
        int maxsum=INT_MIN;
        for(int val: nums){
            cr=cr+val;
            maxsum=max(cr,maxsum);
            if(cr<0){
                cr=0;
            }
        }
        return maxsum;
    }
};
