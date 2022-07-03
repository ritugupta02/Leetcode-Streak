class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
    int c=0;
      for(int i=0;i<nums.size()-1;){
          if(nums[i]<nums[i+1]){
             while(i<nums.size()-1 && nums[i]<=nums[i+1]){
              i++;
          } 
              c++;
         continue;
          }
          if(nums[i]==nums[i+1]){
               while(i<nums.size()-1 && nums[i]==nums[i+1]){
              i++;
                  
          }
              continue;
          }
          while(i<nums.size()-1 && nums[i]>=nums[i+1]){
              i++;
          }
          c++;
          cout<<c<<" ";
      } 
        
        return c+1;
    }
};

//https://leetcode.com/problems/wiggle-subsequence/submissions/
