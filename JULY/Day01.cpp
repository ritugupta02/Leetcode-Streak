class Solution {
public:
    
static bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v2[1] < v1[1];
}
 
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
     
       
        int t=0;
        int ans=0;
         sort(boxTypes.begin(), boxTypes.end(), sortcol);

        for(int i=0;i<boxTypes.size();i++){
            if(t+boxTypes[i][0]<=truckSize){
                 t+=boxTypes[i][0];
                ans+=(boxTypes[i][0]*boxTypes[i][1]);
                
                if(t==truckSize){
                    break;
                }
            }else{
                int s=truckSize-t;
                ans+=s*boxTypes[i][1];
                break;
            } 
        }
        
        return ans;
    }
};


//https://leetcode.com/problems/maximum-units-on-a-truck/
