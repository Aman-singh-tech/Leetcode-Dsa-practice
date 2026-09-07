class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m= nums1.size();
        int n=nums2.size();
        unordered_set<int>visited;
        vector<int>ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(nums1[i]==nums2[j] &&  visited.count(nums1[i])==0){
                    ans.push_back(nums1[i]);
                    visited.insert(nums1[i]);
                    break;
                }
            }
        }
        return ans;
    }
};