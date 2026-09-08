class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        int l=0;
        int j=1;
        for(int i=0;i<n;i++){
             if(nums[i]>0){
                v[l]=nums[i];
                l=l+2;
             }
             else{
                v[j]=nums[i];
                j=j+2;
             }
        }
        return v;
    }
};