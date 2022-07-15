class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int result=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                int c=0;
                if(grid[i][j]==1){
                    queue<pair<int,int>>q;   // storing index of adjacent ones
                    q.push(make_pair(i,j));
                    grid[i][j]=-1;  // changing 1 to -1 to avoid the count of same element again 
                    
                    while(!q.empty()){
                        int a=q.front().first;
                        int b=q.front().second;     
                        c++;   // store the count of 1's in the island
                        q.pop();
                        if((a+1)<grid.size() && grid[a+1][b]==1){
                            q.push(make_pair(a+1,b));  // push adjacent 1 to queue
                            grid[a+1][b]=-1;  // changing 1 to -1 to avoid the count of same element again 
                        }
                        if((b+1)<grid[0].size() && grid[a][b+1]==1){
                            q.push(make_pair(a,b+1));  // push adjacent 1 to queue
                            grid[a][b+1]=-1;  // changing 1 to -1 to avoid the count of same element again 
                        }
                        
                        if((b-1)>=0 && grid[a][b-1]==1){
                            q.push(make_pair(a,b-1));  // push adjacent 1 to queue
                            grid[a][b-1]=-1;  // changing 1 to -1 to avoid the count of same element again 
                        }
                        
                        if((a-1)>=0 && grid[a-1][b]==1){
                             q.push(make_pair(a-1,b));   // push adjacent 1 to queue
                            grid[a-1][b]=-1; // changing 1 to -1 to avoid the count of same element again 
                        }                      
                    }
                    
                    if(c>result){
                        result=c;
                    }
                }
            }
        }
        
        return result;
    }
};

//https://leetcode.com/problems/max-area-of-island/
