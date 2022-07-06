class Solution {
public:
//     int fibo(int n, int *ans){
//         if(n<=1)
//             return n;
//         if(ans[n]!=-1){
//             return ans[n];
//         }
        
//         int a=fibo(n-1,ans);
//         int b=fibo(n-2,ans);
//         ans[n]=a+b;
//         return ans[n];
//     }
    int fib(int n) {
        // int *ans = new int[n+1];
        int a=0, b=1,c=0;
        if(n<=1){
            return n;
        }
        for(int i=2;i<n+1;i++){
            c=a+b;
            a=b;
            b=c;
        }
        // int s= fibo(n,ans);
        return c;
    }
};
