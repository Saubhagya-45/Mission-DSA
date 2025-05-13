class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int lp=0,rp=height.size()-1;
        while(lp<rp){
            int width=rp-lp;
            int hight=min(height[lp],height[rp]);
            int current=hight*width;
            maxwater=max(maxwater,current);
            height[lp]<height[rp]?lp++:rp--;
        }
        return maxwater;
    }
};
