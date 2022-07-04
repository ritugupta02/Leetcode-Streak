class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int>v1(ratings.size(),1);
        vector<int>v2(ratings.size(),1);
        
        for(int i=1;i<ratings.size();i++){
            if(ratings [i]>ratings[i-1]){
                v1[i]=1+v1[i-1];
            }
        }
        for(int i=ratings.size()-2;i>=0;--i){
            if(ratings [i]>ratings[i+1]){
                v2[i]=1+v2[i+1];
            }
        }
        int total=0;
        for(int i=0;i<ratings.size();i++){
            total+=max(v1[i],v2[i]);
        }
        return total;
    }
};

//https://leetcode.com/problems/candy/
