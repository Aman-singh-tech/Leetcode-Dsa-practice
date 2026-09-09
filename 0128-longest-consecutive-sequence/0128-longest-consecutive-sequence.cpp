class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        int longest=1;
        for(int num:st){

            //this loop gives genine start of sequence if exist 
            if(st.find(num-1)==st.end()){   //if num-1 is not found then loop chalega  this st.end gives not found in result if element is not in set 
                int currentNum=num;
                int currentlen=1;
                while(st.find(currentNum+1)!=st.end()){  // if currentNum is found in set then loop chalega 
                    currentNum++;
                    currentlen++;
                }
            
            longest= max(longest, currentlen);
            }
        }
    return longest;
    }
};