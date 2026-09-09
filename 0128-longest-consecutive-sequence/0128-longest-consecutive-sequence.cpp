class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        int longest=1;
        for(int num:st){
            if(st.find(num-1)==st.end()){
                int currentNum=num;
                int currentlen=1;
                while(st.find(currentNum+1)!=st.end()){
                    currentNum++;
                    currentlen++;
                }
            
            longest= max(longest, currentlen);
            }
        }
    return longest;
    }
};