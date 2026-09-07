class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int idx=target-nums[i];
            if(mp.find(idx)!=mp.end()){
                return {mp[idx],i};
            }
            mp[nums[i]]= i;
        }
     return {}; 
    }
};