class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
           int l=i+1, high=n-1;
           while(l<high){
            int sum= nums[i]+nums[l]+nums[high];
            if(sum==0){
                 res.push_back({nums[i],nums[l],nums[high]});
                 while(l<high && nums[l]==nums[l+1]) l++;
                 while(l<high && nums[high]==nums[high-1]) high--;
                l++;high--;
            }
                else if(sum<0){
                    l++;
                }
                else{
                    high--;
                }
            }
           }
        
        
        return res;
    }
};