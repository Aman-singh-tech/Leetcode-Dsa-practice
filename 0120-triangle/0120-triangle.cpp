class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        if(n==0) return 0;

        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            dp[n-1][i]=triangle[n-1][i];
        }

        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                int down=dp[i+1][j];
                int rightdown= dp[i+1][j+1];

                dp[i][j]= triangle[i][j]+min(down,rightdown);
            }
        }
        return dp[0][0];
    }
};