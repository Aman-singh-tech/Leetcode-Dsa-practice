class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool> visited(n,false);
        int province=0;
        for(int city=0;city<n;city++){
            if(!visited[city]){
                province++;
                queue<int> q;
                q.push(city);
                visited[city]=true;

            while(!q.empty()){
                int curr=q.front();
                q.pop();
                for(int i=0;i<n;i++){
                    if(isConnected[curr][i] && !visited[i]){
                        visited[i]=true;
                        q.push(i);
                    }
                }
            }     
        }
    }
            return province;
    }

};