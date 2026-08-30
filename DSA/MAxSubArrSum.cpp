#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int MaxSubArray(vector<int>&arr ,int n){
    int maxsum=0;
    for(int i=0;i<n;i++){
        int sum=sum+arr[i];
        maxsum=max(maxsum,sum);
        if(sum<0) sum=0;
    }

    return maxsum;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MaxSubArray(arr,n);

    return 0;
}