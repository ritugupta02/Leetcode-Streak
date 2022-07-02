class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        
        sort(verticalCuts.begin(),verticalCuts.end());
        sort(horizontalCuts.begin(),horizontalCuts.end());
        
        
       long  long int maxx=0,p,maxy=0,q;
        for(int i=0;i<horizontalCuts.size()-1;i++)
        {
            p=horizontalCuts[i+1]-horizontalCuts[i];
           
            if(p>maxx){
                maxx=p;
            }
        }
        
        for(int i=0;i<verticalCuts.size()-1;i++){
             q=verticalCuts[i+1]-verticalCuts[i];
            if(q>maxy){
                maxy=q;
            }
        }
         // cout<<maxx<<" "<<maxy<<endl;
        
        return ((maxx*maxy)%1000000007);
        
    }
};

//https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/
