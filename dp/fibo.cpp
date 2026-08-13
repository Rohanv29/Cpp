#include <iostream>
using namespace std;
// int fib(int n,vector<int>&dp){
//     if(n<=1) return n;
//     if(dp[n]!=-1) return dp[n];
//     return dp[n]=fib(n-1,dp)+fib(n-2,dp);
// }
int main(){
    int n;
    cin>>n;
    if(n<=1) return n;
    int prev2=0,prev=1;
    for(int i=2;i<=n;i++){
        int curr=prev+prev2;
        prev2=prev;
        prev=curr;
    }
    cout<<prev;
    // vector<int>dp(n+1,-1);
    // cout<<fib(n,dp);
    return 0;
}