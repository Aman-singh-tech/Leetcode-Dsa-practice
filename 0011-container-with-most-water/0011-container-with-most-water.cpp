class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
       int l=0, h=n-1,best=0;
       while(l<h){
        int area= min(height[l],height[h])*(h-l);
        best= max(best,area);
        if(height[l]<height[h]) l++;
        else h--;
       }
       return best;
    }
};