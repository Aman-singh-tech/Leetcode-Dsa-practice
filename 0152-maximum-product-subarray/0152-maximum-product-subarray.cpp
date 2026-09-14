class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int currmax=nums[0],currmin=nums[0],best=nums[0];
        for(int i=1;i<n;i++){
            int x=nums[i];
            int num1=x,num2=currmax*x,num3=currmin*x;
            currmax=max({num1,num2,num3});
            currmin=min({num1,num2,num3});

            best=max(currmax,best);
        }
        return best;
    }
};