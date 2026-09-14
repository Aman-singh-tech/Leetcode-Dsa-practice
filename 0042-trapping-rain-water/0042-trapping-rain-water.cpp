class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0,h=n-1;
        int leftmax=0, rightmax=0;
        int area=0;
        while(l<h){
            if(height[l]<height[h]){
                leftmax= max(leftmax,height[l]);
                area+=leftmax-height[l];
                l++;
            }
            else{
                rightmax=max(rightmax,height[h]);
                area+=rightmax-height[h];
                h--;
            }
        }
        return area;
    }
};