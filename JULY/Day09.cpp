class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
      vector<int>dp(nums.size());
      deque<int>q;
        dp[nums.size()-1]=nums[nums.size()-1];
        q.push_back(nums.size()-1);
        
        for(int i=nums.size()-2;i>=0;--i){
            if(q.front()-i>k)
                q.pop_front();
            dp[i]=nums[i]+dp[q.front()];
            while(q.size() && dp[q.back()]<dp[i])
                q.pop_back();
            q.push_back(i);
        }
        
        
        return dp[0];
        
    }
};

//https://leetcode.com/problems/jump-game-vi/
