// https://leetcode.com/problems/minimum-operations-to-convert-number

class Solution {
public:
    int i = 0;
    int minimumOperations(vector<int>& nums, int start, int goal) {
        vector<bool> visited(1001, false);
        int ans = 0;
        queue<int> q;
        q.push(start);
        while(!q.empty()){
            int size = q.size();
            while(size--){
                int temp = q.front();
                q.pop();
                if(temp == goal)
                    return ans;
                if(temp > 1000 || temp < 0 || visited[temp])
                    continue;
                visited[temp] = true;
                for(int i=0;i<nums.size();i++){
                    int a = temp + nums[i];
                    int b = temp - nums[i];
                    int c = temp ^ nums[i];
                    for(auto x:{a,b,c})
                        q.push(x);
                }
            }
            ans++;
        }
        return -1;
    }
};