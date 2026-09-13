class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int l=0;
        int high=n-1;
        while(l<high){
            int sum=numbers[l]+numbers[high];
            if(sum==target) return {l+1,high+1};
            else if(sum>target) high--;
            else l++;
        }
        return {};
    }
};