#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxProfit(vector<int>&prices,int n){
    int minpr=prices[0],maxpr=0;
    for(int i=0;i<n;i++){
        if(minpr>prices[i]){
            minpr=prices[i];
        }
        else{
            maxpr=max(maxpr,prices[i]-minpr);
        }
    }
    return maxpr;
}
int main(){
    int n;
    cin>>n;
    vector<int >prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    cout<<maxProfit(prices,n);
    return 0;
}